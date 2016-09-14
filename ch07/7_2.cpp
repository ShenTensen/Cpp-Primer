//
//  7_2.cpp
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
    
    std::string isbn() const { return bookNo; }     // 不写入内容
    // 类内声明
    Sales_data& combine(Sales_data &rht);
};

// 类外定义
Sales_data& Sales_data::combine(Sales_data &rht)
{
    units_sold += rht.units_sold;
    revenue += rht.revenue;
    return *this;
}


// 或者类内定义
//
//struct Sales_data {
//    std::string bookNo;
//    unsigned units_sold = 0;
//    double revenue = 0.0;
//    
//    std::string isbn() { return bookNo;}
//    // 类内定义
//    Sales_data& combine(Sales_data &rht)
//    {
//        units_sold += rht.units_sold;
//        revenue += rht.revenue;
//        return *this;
//    };
//};
