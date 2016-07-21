//
//  6_27.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/19.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <initializer_list>
using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int test(initializer_list<int> il)
{
    int total = 0;
    for (const auto &elem: il)
        total += elem;
    
    return total;
}

int main()
{
    initializer_list<int> lst{1, 2, 3, 4, 5};
    
    cout << test(lst) << endl;
    
    return 0;
}