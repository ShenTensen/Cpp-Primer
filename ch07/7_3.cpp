//
//  7_3.cpp
//  ch07
//
//  Created by ShenTensen on 16/7/25.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    
    std::string isbn() { return bookNo; }
    // 类内定义
    Sales_data& combine(Sales_data &rht)
    {
        units_sold += rht.units_sold;
        revenue += rht.revenue;
        return *this;
    };
};

int main()
{
    Sales_data total;
    
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            //
            if (total.isbn() == trans.isbn()) {
                total.combine(trans); //
            } else {
                std::cout << total.bookNo << " " << total.units_sold << " "
                << total.revenue << std::endl;
                //
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        
        std::cout << total.bookNo << " " << total.units_sold << " "
        << total.revenue << std::endl;
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    
    return 0;
}




