//
//  6_3.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/12.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int fact (int val)
{
    int ret = 1;
    
    while (val > 1)
        ret *= val--;
    
    return ret;
}

int main()
{
    int j = fact(3);
    
    cout << "3! = " << j << endl;
    
    return 0;
}
