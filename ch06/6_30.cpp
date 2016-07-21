//
//  6_30.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/19.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
using std::string;

bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;
    
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    
    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] != str2[i])
            return;         // 第一处报错
    }
}                           // 第二处报错，在第一次报错被更正的前提下

int main()
{
    string str1, str2;
    
    str_subrange(str1, str2);
    
    
    return 0;
}