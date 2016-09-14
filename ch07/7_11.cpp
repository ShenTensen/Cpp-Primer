//
//  7_11.cpp
//  ch07
//
//  Created by ShenTensen on 16/7/26.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include "7_11_Sales_data.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main()
{
    Sales_data trans, total("暗夜行路"), one("红楼梦", 10, 200.0);
    
    cout << "trans: ";
    print(cout, trans);
    cout << endl << "total: ";
    print(cout, total);
    cout << endl << "one: ";
    print(cout, one);
    cout << endl;
    
    return 0;
}
