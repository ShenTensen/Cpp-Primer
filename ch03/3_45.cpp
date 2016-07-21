//
//  3_45.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/24.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    
    // 范围 for 实现
    // 第一个循环一定要加上 & 引用符，否则出错！
    for (auto &i : ia)
        for (auto j : i)
            cout << j << " ";
    cout << endl;
    
    // 下标实现，输出 ia 的元素
    for (auto i = 0; i < 3; i++)
        for (auto j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
    cout << endl;
    
    // 指针实现，输出 ia 的元素
    for (auto p = ia; p != ia + 3; p++)
        for (auto q = *p; q != *p + 4; q++)
            cout << *q << " ";
    cout << endl;
    
    return 0;
}



