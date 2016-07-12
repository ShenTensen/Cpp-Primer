//  练习4.21
//  4_21.cpp
//  ch04
//
//  Created by ShenTensen on 16/1/30.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp = 0;
    
    for (auto it = a.begin(); it != a.end(); it++)
    {
        if ((*it) % 2 != 0)
        {
            temp = *it;
            (*it) = 2 * temp;
        }
    }
    
    for (auto it = a.begin(); it != a.end(); ++it)
        cout << (*it) << " ";
    cout << "\n";
    
    return 0;
}
