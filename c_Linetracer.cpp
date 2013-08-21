

#include"c_Linetracer.h"

c_Linetracer::c_Linetracer(int class_id) : StateMachine(class_id){
 current_state = cLinetracer_STATE_sn17up2ge98005;
 eventManager.addSTM(this);
}

c_Linetracer::~c_Linetracer() {

}





const int matrix_Linetracer[] = {-1,1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int c_Linetracer::execute(int event) {
 int next_state = matrix_Linetracer[current_state * 10 + event];
 if(next_state == -1) return 0;
 print("Linetracer");
 current_state = next_state;
 switch(current_state) {

 case c${c.name}_STATE_s${s._sys_name}:
 $<if check_meta(s._sys_meta) == "State">
 sys_${s.action}();
 $</if>
 break;

 case c${c.name}_STATE_s${s._sys_name}:
 $<if check_meta(s._sys_meta) == "State">
 sys_${s.action}();
 $</if>
 break;

 case c${c.name}_STATE_s${s._sys_name}:
 $<if check_meta(s._sys_meta) == "State">
 sys_${s.action}();
 $</if>
 break;

 }
 return 0;
}

