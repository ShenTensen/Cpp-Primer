//
//  6_36.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/20.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// 练习6.36
string (*func(void))[10];

// 练习6.37
// 使用类型别名
using arrT = string[10];
arrT* func1(void);

// 使用尾置返回类型
auto func2(void) -> string(*)[10];

// 使用 decltype
string s[10] = {
    "Shen", "Tensen", "will", "be", "a", "great", "man", "!"
};
decltype(s) *func3(void);

// A test function
//string (*func(string (&arr)[10]))[10]
//{
//    for (auto elem: arr)
//        cout << elem;
//    for (int i = 0; i < 10; ++i)
//        arr[i] = "Y";
//    for (auto elem: arr)
//        cout << elem << endl;
//    return &arr;
//};

int main()
{
//    string s[10] = {
//        "Shen", "Tensen", "will", "be", "a", "great", "man", "!"
//    };
   
    return 0;
}