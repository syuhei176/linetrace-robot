

#ifndef c_Linetracer_H_
#define c_Linetracer_H_

#include "main.h"
#include"StateMachine.h"
#include "EventManager.h"



#define cLinetracer_STATE_sn17up2ge98001 0

#define cLinetracer_STATE_sn17up2ge98003 1

#define cLinetracer_STATE_sn17up2ge98005 2

#define cLinetracer_STATE_IGNORE -1

class c_Linetracer : public StateMachine {
 public:
 c_Linetracer(int class_id);
 ~c_Linetracer();
 int execute(int event);
};

#endif

