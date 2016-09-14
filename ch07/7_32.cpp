//
//  7_32.cpp
//  ch07
//
//  Created by ShenTensen on 16/7/30.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include "7_32.h"
using std::cout;
using std::endl;

int main()
{
    Window_mgr win;
    win.screens[0].display(cout);
    win.clear(0);
    win.screens[0].display(cout);
    
    return 0;
}