//
//  6_4.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/12.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void fact2 ()
{
    int ret = 1;
    int val = 0;
    cout << "Input an integer: ";
    cin >> val;
    
    cout << val << "! = ";
    while (val > 1)
        ret *= val--;
    
    cout << ret << endl;
}

int main()
{
    fact2();
    
    return 0;
}
