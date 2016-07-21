//
//  6_22.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/16.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//
// 编写一个函数，使其交换两个 int 指针

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void swapPointer(int *&p1, int *&p2)
{
    
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    int v1 = 10, v2 = 20;
    int *p1 = &v1, *p2 = &v2;
    
    cout << "p1 = " << p1 << " p2 = " << p2 << endl;    //输出指针指向的地址
    swapPointer(p1, p2);
    cout << "p1 = " << p1 << " p2 = " << p2 << endl;
    
    return 0;
}