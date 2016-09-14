//
//  7_11_Sales_data.h
//  ch07
//
//  Created by ShenTensen on 16/7/26.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#ifndef __11_Sales_data_h
#define __11_Sales_data_h
#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    
    // 构造函数
    Sales_data() = default;        // 默认构造函数
    Sales_data(const std::string &s): bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p) { }
    Sales_data(std::istream &is);   // 构造函数，在类的外部定义
    // 成员函数
    // 类内定义
    std::string isbn() const { return bookNo; }
    //
    Sales_data& combine(const Sales_data &rht)
    {
        units_sold += rht.units_sold;
        revenue += rht.revenue;
        return *this;
    };
    
};

// 非成员函数
// 从输入流读取数据到 Sales_data 对象
std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    
    return is;
}

// 输出 Sales_data 对象
std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    
    return os;
}

// 两个 Sales_data 对象相加，返回值是一个新的 Sale_data
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    
    return sum;
}

Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);
}


#endif /* __11_Sales_data_h */
