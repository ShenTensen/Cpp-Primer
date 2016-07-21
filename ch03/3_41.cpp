//
//  3_41.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/23.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  练习 3.41     用整型数组初始化一个 vector 对象

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main ()
{
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vint (begin (arr), end (arr));
    
    for (auto i: vint)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
