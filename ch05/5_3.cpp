//
//  5_3.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/6.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//  使用逗号运算符重写1.4.1节（第10页）的while循环，使它不需要块

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, val = 1;
    
    while (val <= 10)
        sum += val,            //第一次如此使用逗号运算符，或者从没发现逗号运算符的妙用
        ++val;
    
    std::cout << "sum of 1 to 10 inclusive is "
              << sum << std::endl;
    
    return 0;
}
