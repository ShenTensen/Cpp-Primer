//
//  3_26.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  练习 3.26
//  看看 mid = beg + (end - beg) / 2 和 mid = (beg + end) / 2 的区别

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<int> text{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
        14, 15, 16, 17, 18, 19, 20};
    int sought= 16;
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;      // (end - beg) / 2 相当于偏移量
    auto mid2 = (end - beg) / 2 ;                   // mid2 的值为 10
    cout << "mid = " << *mid << "   mid2 = "<< mid2 << endl;
    while (mid != end && *mid != sought)
    {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
    
    return 0;
}