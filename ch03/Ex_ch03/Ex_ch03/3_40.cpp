//
//  3_40.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/23.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//  3.40 连接两个字符串

#include <iostream>
#include <string.h>

int main ()
{
    char str1[] = "Hello";
    char str2[] = "world";
    char str3[12];
    
    strcpy (str3, str1);
    strcat (str3, str2);
    std::cout << str3 << std::endl;
    
    return 0;
}