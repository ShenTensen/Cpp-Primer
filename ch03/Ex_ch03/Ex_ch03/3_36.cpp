//
//  3_36.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  C++ Primer 练习 3.36 比较两个数组是个难题！！！！！

#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    // 怎样比较两个数组是否相等？？？
    // 错误的方式！！！
    int arr1[] = {0, 1, 2, 3, 4, 5, 6};
    int arr2[] = {0, 1, 2, 3, 4, 5};
    int * p1 = arr1, * p2 = arr2;
    int * p3 = &arr1[7], *p4 = &arr2[6];
    
    for (; p1 != p3 || p2 != p4; p1++, p2++)
        if (*p1 != *p2)
        {
            cout << "arr1 != arr2" << endl;
            break;
        }
    if (*--p1 == *--p2)
        cout << "arr1 == arr2" << endl;
    // 以上没有解决比较数组的问题
    vector<int> v1{1, 2, 3, 4, 5, 6}, v2{1, 2, 3, 4, 5};
    if (v1 == v2)
        cout << "v1 == v2" << endl;
    else
        cout << "v1 != v2" << endl;
    
    return 0;
}

