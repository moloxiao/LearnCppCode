//
//  MsgObserver.h
//  LearnCppCode
//
//  Created by molo on 16/3/8.
//  Copyright © 2016年 molo. All rights reserved.
//

#ifndef MsgObserver_h
#define MsgObserver_h

//Observer抽象类，用作接口
class MsgObserver
{
public:
    virtual void handle_event(int msgId)=0;
};

class MsgUserOne : public MsgObserver {
public:
    void handle_event(int msgId) {
        std::cout<<"MsgUserOne: handle_event, msgId : "<<msgId<<std::endl;
    }
};

#endif /* MsgObserver_h */
