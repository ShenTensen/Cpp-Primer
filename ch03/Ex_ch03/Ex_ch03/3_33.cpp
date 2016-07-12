//
//  3_33.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>

using namespace std;

int main ()
{
    unsigned scores[11] = {};
    unsigned grade;
    
    while (cin >> grade)
    {
        if (grade <= 100)
            ++scores[grade / 10];
    }
    
    for (int i = 0; i < 11; i++)
        cout << scores[i] << " ";
    cout << endl;
    
    return 0;
}
