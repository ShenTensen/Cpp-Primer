//
//  6_24.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/16.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}

int main()
{
    int ia[10] = {0, 1, 3, 3, 4};
    
    print(ia);
    
    return 0;
}