//
//  3_23.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/19.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  使用迭代器

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // it 迭代器
    for (auto it = v.begin(); it != v.end(); it++)
    {
        *it = (*it) * 2;
        cout << (*it) << " ";
    }
    cout << endl;
    
    return 0;
}