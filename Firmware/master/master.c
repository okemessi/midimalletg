#define MAX_WAITTIME 15
#define MAX_KEYNUM 61
void main(void){
    unsigned char period_now = 0;
    unsigned short ScanBuffer[MAX_WAITTIME][MAX_KEYNUM]={0};
    unsigned char WaitCount[MAX_KEYNUM]={0};
    unsigned short IgnoreCount[MAX_KEYNUM]={0};
    
    while(){
        do{
          GetKeyArray(ScanBuffer[period_now]);
        }while(Is_TMR1ms_Overflow());
        Reset_TMR1ms();
    }
}