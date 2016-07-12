//
//  6_6.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/12.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int fun(int val)
{
    static int sta = 0;
    int var = 0;
    
    cout << "var = " << var << "  sta = " << sta << "   val = " << val << endl;
    
    var++;
    sta++;
    
    cout << "var = " << var << "  sta = " << sta << "   val = " << val << "\n" << endl;

    return val;
}

int main()
{
    for (int i = 0; i < 10; i++)
        fun(i);
    
    return 0;
}