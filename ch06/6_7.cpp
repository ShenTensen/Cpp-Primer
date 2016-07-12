//
//  6_7.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/12.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

int fun ()
{
    static int val = 0;
    
    return val++;
}

int main()
{
    for (int i = 0; i < 10; i++)
        cout << fun() << endl;
    
    return 0;
}