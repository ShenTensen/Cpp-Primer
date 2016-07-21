//
//  6_21.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/16.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int max(int v1, const int *v2)
{
    if (v1 > (*v2))
        return v1;
    else
        return (*v2);
}

int main()
{
    int i = 0, j = 0;
    
    
    while (cout << "Enter two integer: " << endl, cin >> i >> j)
    {
        cout << max(i, &j) << endl;
    }
    
    return 0;
}
