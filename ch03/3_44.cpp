//
//  3_44.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/24.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  使用类型别名

#include <iostream>
using namespace std;
using int_array = int[4];
using Int = int;

int main ()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    
    // 范围 for 实现
    // int (&i)[4] : ia
    for (int_array &i : ia)
        for (int j : i)
            cout << j << " ";
    cout << endl;
    
    // 下标实现，输出 ia 的元素
    for (Int i = 0; i < 3; i++)
        for (Int j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
    cout << endl;
    
    // 指针实现，输出 ia 的元素
    for (int_array *p = ia; p != ia + 3; p++)
        for (Int *q = *p; q != *p + 4; q++)
            cout << *q << " ";
    cout << endl;
    
    return 0;
}



