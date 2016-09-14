//
//  7_41.cpp
//  ch07
//
//  Created by ShenTensen on 16/9/7.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
using std::istream;

class Sales_data {
public:
    // 非委托构造函数
    Sales_data(std::string s1, std::string s2, unsigned cnt, double price):
        bookNo(s1), name(s2), units_sold(cnt), revenue(cnt * price)
        {
            cout << "Sales_data(std::string s1, std::string s2, unsigned cnt, double price)" << endl;
        }
    // 委托构造函数
    Sales_data(): Sales_data("", "", 0, 0) { cout << "Sales_data()" << endl; }
    Sales_data(std::string s): Sales_data(s, "", 0, 0) { cout << "Sales_data(std::string s)" << endl; }
    Sales_data(std::istream &is): Sales_data() { read(is, *this); cout << "Sales_data(std::istream &is)" << endl; }

    // 成员函数声明
    istream& read(istream &is, Sales_data &item);
 
private:
    std::string bookNo;
    std::string name;
    unsigned units_sold;
    double revenue;
};

istream& Sales_data::read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.name >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}


int main()
{
    Sales_data s("1112", "暗夜行路", 0, 0);
    cout << "\n";
    Sales_data s2;
    cout << "\n";
    Sales_data s3("1123");
    cout << "\n";
    Sales_data s4(std::cin);
    
    return 0;
}