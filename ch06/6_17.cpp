//
//  6_17.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/15.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void ifUpper(const string &s)
{
    for (char c: s)
        if (isupper(c))
        {
            cout << s << " contains upper." << endl;
            break;
        }
    //cout << s << " has no upper." << endl;    怎么样做可以实现不含大写字母时显示这句？
}

void toUpper(string &s)
{
    for (char &c: s)
        c = tolower(c);
//    for (auto i = 0; i != s.size(); ++i)
//        s[i] = tolower(s[i]);
}

int main()
{
    string s;
    cout << "Input a string: " << endl;
    
    while (cin >> s)
    {
       // cout << s << endl;
        
        ifUpper(s);
        toUpper(s);
        
        cout << s << "\ninput a string or ctrl+d to quit."<< endl;
    }
    
    return 0;
}
