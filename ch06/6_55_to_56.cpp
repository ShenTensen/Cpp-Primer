//
//  6_55_to_56.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/22.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int plus(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return b != 0 ? (a / b) : 0;
}

int main()
{
    vector<int (*) (int, int)> v{plus, minus, multiply, divide};
    
//    v.push_back(plus);
//    v.push_back(minus);
//    v.push_back(multiply);
//    v.push_back(divide);
    
    for (auto elem: v)
        cout << elem(30, 5) << endl;
    
    return 0;
}