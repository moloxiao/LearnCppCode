//
//  main.cpp
//  LearnCppCode
//
//  Created by molo on 16/3/8.
//  Copyright © 2016年 molo. All rights reserved.
//

#include <iostream>
#include "DesignPattern/Observer/MsgObserver.h"
#include "DesignPattern/Observer/MsgCreater.h"

int main(int argc, const char * argv[]) {
    MsgCreater *mc = new MsgCreater();
    MsgObserver *muo = new MsgUserOne();
    mc->add_observer(muo);
    mc->notify_observer();
}





