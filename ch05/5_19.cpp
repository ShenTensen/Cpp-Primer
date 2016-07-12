//
//  5_19.cpp
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
    string s1, s2;

    cout << "Enter two strings: " << endl;
    cin >> s1 >> s2;
    do {
        if (s1.length() < s2.length())
            cout << s1 << endl;
        else
            cout << s2 << endl;
        cout << "Enter two strings: " << endl;
    } while (cin >> s1 >> s2);
    
    return 0;
}
