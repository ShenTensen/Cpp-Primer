//
//  7_21.cpp
//  ch07
//
//  Created by ShenTensen on 16/7/27.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include "7_21_Sales_data.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    
    Sales_data total;
    if (read(cin, total)) {
        Sales_data trans;
        
        while (read(cin, trans))
        {
            //
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);   // 将 trans 加到 total 上
            } else {
                print(cout, total);
                total = trans;
                //total.bookNo = trans.bookNo;
                //total.units_sold = trans.units_sold;
                //total.revenue = trans.revenue;
            }
        }
        print(cout, total);
    }
    else {
        std::cerr << "No data?!" << std::endl;
    }
    
    return 0;
}
