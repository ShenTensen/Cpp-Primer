//
//  3_24.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/20.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  C++ Primer 用迭代器重做练习3.20

#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> v;
    int temp;
    
    cout << "Input some interger(ctrl+d to quit):" << endl;
    while (cin >> temp)
    {
        v.push_back(temp);
    }
    
    // 第一问
    for (auto it = v.begin(); it != v.end() - 1; it++)      // 注意判断条件
    {
        cout << (*it) + *(it + 1) << " ";
    }
    cout <<endl;
    
    // 第二问
    auto end = v.end();
    auto begin = v.begin();
    auto mid = v.begin() + (end - begin) / 2;               // v.end() - v.begin()的值？？
    
  //  cout << *mid << endl;  // 检查 *mid 的值, mid也许会是个地址？
    if (v.size() % 2 == 0)              // 当 vector 元素数为偶数
    {
        for (auto it = v.begin(); it != mid; it++)
        {
            cout << (*it) + (*--end)<< " ";
        }
    } else {                            // 为奇数，for 循环的条件与元素数为偶数的条件不同
        for (auto it = v.begin(); it != mid + 1; it++)
        {
            if (it == mid)
                cout << *it << " ";
            else
                cout << (*it) + (*--end)<< " ";
        }
    }
    cout << endl;
    
    return 0;
}




