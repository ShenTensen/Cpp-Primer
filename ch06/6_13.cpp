//
//  6_13.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/15.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>

void f(int);
void e(int&);

int main()
{
    int i = 10, j = 10;
    
    f(i);
    e(j);
    
    std::cout << "i = " << i << " j = " << j << std::endl;
    
    return 0;
}

void f (int p)
{
    p = 88;
    
    
    
}

void e (int &q)
{
    q = 88;
}