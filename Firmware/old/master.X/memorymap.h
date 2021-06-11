typedef struct{
    unsigned char program_number;
    signed char octave;//note number = key number + 36 + octave*12
}_registration;

typedef struct {
    unsigned short ignore_time;
    unsigned short wait_time;
    unsigned short minimum_velocity;
    unsigned short note_length;
    _registration registration[4];
}_memorymap;

void load_memorymap(_memorymap* memorymap){
    *memorymap = default_memorymap;//Temporary
}

_memorymap default_memorymap = {
    20,
    2,
    1,
    100,
    {
        {13,0},//Mari
        {12,0},//Vib
        {10,2},//Glck
        {14,1},//Xylo
    }
};