//
//  3_28.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string sa[10];
int ia[10];

int main ()
{
    string sa2[10];
    int ia2[10];
    
    for (int i = 0; i < 10; i++)
        cout << "sa[" << i << "]=" << sa[i]
        << "sa2[" << i << "]=" << sa2[i]
        << "ia[" << i << "]=" << ia[i]
        << "ia2[" << i << "]=" << ia2[i]
        << endl;
    //cout << "====" << '\0' << "====" << endl;

    return 0;
}
