//
//  3_32.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<int> v;
    
    for (int i = 0; i < 10; i++)
        v.push_back (i);
    for (auto i: v)
        cout << i << " ";
    cout << endl;
    
    vector<int> v2 = v;
    for (auto i: v)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
