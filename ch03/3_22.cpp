//
//  3_22.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/19.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
//#include <cstdio>
//#include <cctype>

using namespace std;

int main ()
{
    vector<string> text;
    
    for (auto it = text.begin(); it != text.end(); it++)
        cout << *it << " ";
    cout << endl;
    
    return 0;
}