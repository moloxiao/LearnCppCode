//
//  MsgCreater.h
//  LearnCppCode
//
//  Created by molo on 16/3/8.
//  Copyright © 2016年 molo. All rights reserved.
//

#ifndef MsgCreater_h
#define MsgCreater_h

#include <iostream>
#include <vector>
#include "MsgObserver.h"

class MsgCreater
{
private:
    std::vector<MsgObserver*> msgObserver;
public:
    void add_observer(MsgObserver *o){
        msgObserver.push_back(o);
    }
    
    void remove_observer(MsgObserver *o) {
        for(std::vector<MsgObserver*>::iterator it=msgObserver.begin(); it!=msgObserver.end(); it++) {
            if(o==*it) {
                msgObserver.erase(it);
                return;
            }
        }
    }
    
    void notify_observer() {
//        std::cout<<"MsgCreater: notify_observer, msgId : "<<10<<std::endl;
            for(std::vector<MsgObserver*>::const_iterator it=msgObserver.begin(); it!=msgObserver.end(); it++) {
                (*it)->handle_event(10);
            }
    }
};

#endif /* MsgCreater_h */
