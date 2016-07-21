//
//  3_20.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/18.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  C++ Primer 练习3.20

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
    for (int i = 0; i != v.size() - 1; i++)             // 注意判断条件
    {
        cout << v[i] + v[i + 1] << " ";
    }
    cout <<endl;
    
    // 第二问
    if (v.size() % 2 == 0)              // 当数组元素数为偶数
    {
        for (int i = 0; i != v.size() / 2; i++)
        {
                cout << v[i] + v[v.size() - i - 1] << " ";      // 如果是 v[v.size() - i] 则出错，why? 在v[v.size()] == 0
        }
    } else {
        for (int i = 0; i != v.size() / 2 + 1; i++)
        {
            if (i == v.size() / 2)
                cout << v[i] << " ";
            else
                cout << v[i] + v[v.size() - i - 1] << " ";
        }
    }
    cout << endl;
    
    return 0;
}




