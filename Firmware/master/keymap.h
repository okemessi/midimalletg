
enum _channeltype {bar,fader,sw,na};

typedef struct 
{
    _channeltype channeltype;
    unsigned char number;
}_channel;

_channel keymap[10][8] = {
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//0
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//1
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//2
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//3
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//4
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//5
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//6
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//7
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}},//8
    {{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11},{bar,11}} //9
}