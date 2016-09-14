//
//  7_27.cpp
//  ch07
//
//  Created by ShenTensen on 16/7/30.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
#include "7_27_Screen.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    
    return 0;
}