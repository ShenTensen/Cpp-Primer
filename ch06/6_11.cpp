//
//  6_11.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/15.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

// 使用引用传递形参
void reset(int &i)
{
    i = 1994;
}

int main(void)
{
    int j = 100;

    reset(j);
    cout << "j = " << j << endl;
    
    return 0;
}
