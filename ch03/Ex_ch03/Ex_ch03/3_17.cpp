//
//  3_17.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/14.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main ()
{
    vector<string> v;
    string temp;
    
    cout << "Input words(Ctrl+D to quit):" << endl;
    while (cin >> temp)         // 有没有其他方法？ ctrl＋d
    {
        v.push_back(temp);
        if (v.size() == 5)      // 控制输入的词数
            break;
    }
    
    for (auto &i: v)
        for (auto &j: i)
            j = toupper(j);
    
    for (auto i: v)             // 打印 vector 里的每个字符串
        cout << i << endl;;
    
    return 0;
}
