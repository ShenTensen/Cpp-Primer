//
//  6_23.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/16.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
//#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int *cp)
{
    while (*cp < 2)
        cout << *cp++ << endl;
}

void print(const int *beg, const int *end)
{
    
    while (beg != end)
        cout << *beg++ << endl;
}

void print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i)
    {
        cout << ia[i] << endl;
    }
}

void print(int (&arr)[2])
{
    for (auto elem: arr)
        cout << elem << endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    
    print(j);
    print(begin(j), end(j));
    print(j, 2);
    print(j);
    
    
    
    return 0;
}