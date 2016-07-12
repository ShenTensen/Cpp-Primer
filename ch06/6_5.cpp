//
//  6_5.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/12.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void put (int val)
{
    cout << "实参的绝对值是：";
    if (val < 0)
        cout << -val << endl;
    else
        cout << val << endl;
}

int main()
{
    int par = -10;
    put (par);
    
    return 0;
}