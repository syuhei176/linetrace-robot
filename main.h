
#include "c_Linetracer.h"


#define NULL (0)

#define STATECLASS_Linetracer 0



#define STATE_CLASS 0
#define EVENT_none 0
#define EVENT_touch 1
#define EVENT_white 2
#define EVENT_black 3
#define EVENT_release 4
#define EVENT_touch2 5
#define EVENT_release2 6
#define EVENT_gray 7
#define EVENT_sonar 8





#define EVENT_NUM 13


extern "C"
{
 void sys_stop();
 void sys_go();
 void sys_right();
 void sys_left();
 void sys_back();
 void sys_bleft();
 void sys_bright();
 void sys_led();
 void sys_();
 void print(char *);
 void clock_wait(int t);
 void sys_userdefine1();
 void sys_userdefine2();
 void sys_sendevent(int,int);
}

void Initialize();

