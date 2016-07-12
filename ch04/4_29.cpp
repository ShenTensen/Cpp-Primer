//
//  4_29.cpp
//  ch04
//
//  Created by ShenTensen on 16/2/2.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int x[10];
    int *p = x;
    
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) << endl;      // 指针占八个字节的空间
    cout << sizeof(*p) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    
    return 0;
}