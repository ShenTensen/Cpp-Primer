//
//  5_21.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/21.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::cin;
using std::string;

int main()
{
    string str, laststr;
    
    while (cin >> str)
    {
        if  (str[0] > 'Z' || str[0] < 'A')  // 当字符串的首字母不为大写时
            continue;
        if (str == laststr)
            break;
        else
            laststr = str;
    }

    if (cin.eof())                          // 之前不了解 cin.eof()；当输入终止时执行这个操作
        cout << "No words appears two times" << endl;
    else
        cout << str << " appears two times" << endl;

    
    return 0;
}