//
//  3_39.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  3.39 比较两个C风格字符串的内容

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main ()
{
    string s1("Hello world"), s2("Hello world");
    char cstr1[] = "hello world";
    char cstr2[] = "hello world 1";
    
    if ( strcmp (cstr1, cstr2) == 0)
        cout << "cstr1 == cstr2" << endl;
    else
        cout << "cstr1 != cstr2" << endl;
    
    if (s1 == s2)
        cout << "s1 == s2" << endl;
    else
        cout << "s1 != s2" << endl;
    
    return 0;
}