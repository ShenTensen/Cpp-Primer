//
//  3_25.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/20.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  C++ Primer 练习3.25

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<int> scores(11, 0);
    unsigned grade;
    
    cout << "输入分数：" << endl;
    while (cin >> grade)
    {
        auto it = scores.begin();
        if (grade <= 100)
            (*(it + grade / 10))++;     // 注意括号！！！
    }
    
    for (auto i: scores)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
