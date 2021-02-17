typedef enum {bar,fad,sw,ref,na} _channeltype;

typedef struct 
{
    _channeltype channeltype;
    unsigned char number;
} _keymap_channel;

typedef struct
{
    unsigned short buffer;
    unsigned char velocity;
    unsigned short counter;
} _keyvalue_channel;

typedef _keyvalue_channel _keyvalue[10][8];

_keymap_channel keymap[10][8] = {
    {{bar, 0},{bar, 2},{bar, 4},{bar, 5},{bar, 7},{bar, 9},{bar,11},{bar,12}},//0
    {{bar,14},{bar,16},{bar,17},{bar,19},{bar,21},{bar,23},{bar,24},{bar,26}},//1
    {{bar,28},{bar,29},{bar,31},{bar,33},{bar,35},{bar,36},{bar,38},{bar,40}},//2
    {{bar,41},{bar,43},{bar,45},{bar,47},{bar,48},{bar,50},{bar,52},{bar,53}},//3
    {{bar,55},{bar,57},{bar,59},{bar,60},{bar, 1},{bar, 3},{bar, 6},{bar, 8}},//4
    {{bar,10},{bar,13},{bar,15},{bar,18},{bar,20},{bar,22},{bar,25},{na , 0}},//5
    {{bar,27},{bar,30},{bar,32},{bar,34},{bar,37},{bar,39},{bar,42},{bar,44}},//6
    {{bar,46},{bar,49},{bar,51},{bar,54},{bar,56},{bar,58},{ref, 1},{ref, 0}},//7
    {{fad, 0},{fad, 1},{fad, 2},{fad, 3},{fad, 4},{fad, 5},{fad, 6},{fad, 7}},//8
    {{sw , 0},{sw , 1},{sw , 2},{sw , 3},{sw , 4},{sw , 5},{sw , 6},{sw , 7}} //D
};