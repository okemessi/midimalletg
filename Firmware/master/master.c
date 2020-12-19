#define MAX_KEYNUM 61
#define MAX_FADERNUM 3
#define MAX_SWNUM 6
#ifndef bool
typedef unsigned char bool;
#endif

extern unsigned short (*GetKey[MAX_KEYNUM])(void);
extern unsigned short (*GetFader[MAX_FADERNUM])(void);
extern bool (*GetSw[MAX_SWNUM])(void);
extern bool Is_TMR1ms_Overflow(void);
extern void Reset_TMR1ms(void);

extern void (*SendFader[MAX_FADERNUM])(unsigned char);
extern void (*SendSw[MAX_SWNUM])(bool);
extern void SendKey(unsigned short, unsigned char);

extern unsigned char KeyToVelocity(unsigned short);
inline unsigned char FaderToCC(unsigned short s){
    return s>>3;
};

bool internalsustain = 0;

void main(void){
    unsigned char waittime = 1;
    unsigned short ignoretime = 15;
    unsigned short duration = 90;
    unsigned short Threshold = 0x240;

    unsigned short KeyBuffer[MAX_KEYNUM]={0};
    unsigned char WaitCount[MAX_KEYNUM]={0};
    unsigned short IgnoreCount[MAX_KEYNUM]={0};
    unsigned short DurationCount[MAX_KEYNUM]={0};
    bool SwBuffer[MAX_KEYNUM]={0};
    bool SwBufferPrev[MAX_KEYNUM]={0};
    unsigned short FaderBuffer[MAX_KEYNUM]={0};
    unsigned short FaderBufferPrev[MAX_KEYNUM]={0};
    
    

    unsigned short i, j;
    
    while(1){
        do{
          for (i = 0; i < MAX_KEYNUM; i++)
          {
              j=GetKey[i]();
              if (KeyBuffer[i] < j) KeyBuffer[i] = j;
          }
        }while(Is_TMR1ms_Overflow());
        Reset_TMR1ms();
        
        for (i = 0; i < MAX_FADERNUM; i++) {
            FaderBuffer[i] = FaderToCC(GetFader[i]());
            if (FaderBuffer[i] != FaderBufferPrev[i]){
                SendFader[i](FaderBuffer[i]);
                FaderBufferPrev[i] = FaderBuffer[i];
            }
        }

        for (i = 0; i < MAX_SWNUM; i++) {
            SwBuffer[i] = GetSw[i]();
            if (SwBuffer[i] != SwBufferPrev[i]){
                SendSw[i](SwBuffer[i]);
                SwBufferPrev[i] = SwBuffer[i];
            }
        }

        for (i = 0; i < MAX_KEYNUM; i++)
        {
            if (KeyBuffer[i] >= Threshold && IgnoreCount[i] == 0 && WaitCount[i] == 0) WaitCount[i] = waittime;
            
            if (WaitCount[i] == 1){
                DurationCount[i] = duration;      
                SendKey(i,KeyToVelocity(KeyBuffer[i]));
                IgnoreCount[i] = ignoretime;
                DurationCount[i] = duration;
            }
            if(DurationCount[i] == 1){
                SendKey(i,0);
            }

            /* timer */
            if (WaitCount[i]>0) WaitCount[i] --; else KeyBuffer[i] = 0;
            if (IgnoreCount[i]>0) IgnoreCount[i] --;
            if (DurationCount[i]>0 && !internalsustain) DurationCount[i] --;
        }
    }
}