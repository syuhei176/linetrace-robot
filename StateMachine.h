#ifndef _STATEMACHINE_H_
#define _STATEMACHINE_H_

class StateMachine {
  private:
protected:
    int current_state;
  public:
    int class_id;
    StateMachine(int _class_id){class_id = _class_id;}
    ~StateMachine(){}
    virtual int execute(int event) = 0;
};

#endif