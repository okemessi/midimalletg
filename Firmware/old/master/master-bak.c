#define MAX_WINDOWSIZE 16
#define MAX_KEYNUM 61
void main(void){
    unsigned char period_now = 0;
    unsigned char waittime = 1;
    unsigned short ScanBuffer[MAX_WINDOWSIZE][MAX_KEYNUM]={0};
    unsigned short BufferMax[MAX_KEYNUM]={0};
    unsigned char WaitCount[MAX_KEYNUM]={0};
    unsigned short IgnoreCount[MAX_KEYNUM]={0};


    unsigned int i, j;
    
    while(1){
        do{
          GetKeyArray(ScanBuffer[period_now]);
        }while(Is_TMR1ms_Overflow());
        Reset_TMR1ms();
        for (i = 0; i < MAX_KEYNUM; i++)
        {
          for (j = 0; j < waittime; i++)
          {
            if (ScanBuffer[j][i]>BufferMax[i]) BufferMax[i] = ScanBuffer[j][i];            
          }          
        }
        
        //counter ++
        period_now++;
        if (period_now >= waittime) period_now = 0;
        for (i = 0; i < MAX_KEYNUM; i++){
          ScanBuffer[period_now][i] = 0;
          BufferMax[i]=0;
        }
    }

}