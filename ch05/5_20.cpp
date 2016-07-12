//
//  5_20.cpp
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
        if (str == laststr)
        {
            cout << str << " appears two times" << endl;
            break;
        }
        laststr = str;
    }
    
    if (cin.eof())          // 之前不了解 cin.eof()
        cout << "No words appears two times" << endl;
   
    return 0;
}



