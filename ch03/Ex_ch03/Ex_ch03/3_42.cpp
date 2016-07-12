//
//  3_42.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/23.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  3.42    将含有整数元素的vector对象拷贝给一个整型数组

#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#define N 20
using namespace std;

int main ()
{
//    string s("Hello world!");
//    char str[20];
//    strcpy (str, s.c_str());
//    const char *str2 = s.c_str();
//   // str2 = "UO";        // 不报错， 也不改变字符串s
//    s = "You";
//    cout << s << endl;
//    cout << str << endl;
//    cout << str2 << endl;
    
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    int arr[N];
    
    int j = 0;
    for (auto i = v.begin(); i != v.end() && j < N; i++, j++)
        arr[j] = *i;
    for (int i = 0; i < j; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}