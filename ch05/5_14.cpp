//
//  5_14.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/20.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>

using std::endl;
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str1;
    string tempstr, laststr;
    int count = 0, tempCount = 0;      // 计数
    
    while (cin >> tempstr)
    {
        if (tempCount == 0)
            laststr = tempstr;
        if (tempstr == laststr)
            ++tempCount;
        else
        {
            laststr = tempstr;
            tempCount = 1;              // 次数置为 1
        }
        if (tempCount > count)
        {
            count = tempCount;
            str1 = tempstr;
        }
    }
    
    if (count == 1)
        cout << "All words are single!" << endl;
    else
        cout << "\"" << str1 << "\" appears " << count << " times" << endl;
    
    return 0;
}




