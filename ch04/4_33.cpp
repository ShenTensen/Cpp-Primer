//
//  4_33.cpp
//  ch04
//
//  Created by ShenTensen on 16/2/2.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0;
    bool i = 1;
    
    // 不能理解这个表达式
    i ? ++x, ++y : --x, --y;
    //cout << x << "  " << y << endl;
    //--y;
    cout << x << "  " << y << endl;
    
    return 0;
}