typedef struct{
    unsigned char program_number;
    unsigned char octave;
}_registration;

typedef struct {
    unsigned short ignore_time;
    unsigned short wait_time;
    _registration registration[4];
}_memorymap;