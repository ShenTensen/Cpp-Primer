//
//  6_12.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/15.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

// 使用引用传递交换两个变量的值
void wrap(int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}

int main(void)
{
    int i = 10, j = 66;
    cout << "i = " << i << " j = " << j << endl;
    
    wrap(i, j);
    cout << "i = " << i << " j = " << j << endl;
    
    return 0;
}