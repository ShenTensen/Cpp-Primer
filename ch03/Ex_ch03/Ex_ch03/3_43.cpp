//
//  3_43.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/23.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  3.43    三种方式输入 ia 的元素

#include <iostream>
using namespace std;

int main ()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    
//    for (auto &i : ia)
//    {
//        for (auto j : i)
//            cout << j << " ";
//      //  cout << "i==" << i << endl;
//    }
//    cout << endl;
    
    // 范围for实现
    for (int(&i)[4] : ia)
        for (int j : i)
            cout << j << " ";
    cout << endl;
    
    // 下标实现，输出 ia 的元素
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
    cout << endl;
    
    // 指针实现，输出 ia 的元素
    for (int (*p)[4] = ia; p != ia + 3; p++)
        for (int *q = *p; q != *p + 4; q++)
            cout << *q << " ";
    cout << endl;
    
    return 0;
}



