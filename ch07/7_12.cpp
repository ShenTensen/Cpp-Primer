//
//  7_12.cpp
//  ch07
//
//  Created by ShenTensen on 16/7/26.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//
// 不解 练习7.13 的题意
#include <iostream>
#include "7_12_Sales_data.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    
    Sales_data total(cin);
    if (!total.bookNo.empty()) {
        Sales_data trans;
        
        while (read(cin, trans))
        {
            //
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);   // 将 trans 加到 total 上
            } else {
                print(cout, total);
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        print(cout, total);
    }
    else {
        std::cerr << "No data?!" << std::endl;
    }
    
    return 0;
}
