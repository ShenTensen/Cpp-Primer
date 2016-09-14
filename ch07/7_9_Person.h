//
//  7_9_Person.h
//  ch07
//
//  Created by ShenTensen on 16/7/25.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#ifndef __9_Person_h
#define __9_Person_h

#include <string>

struct Person {
    std::string name;
    std::string address;
    
    std::string getName() const { return name; }
    std::string getAdd() const { return address; }
};

// 非成员函数，从输入流读取数据
std::istream read(std::istream &is, Person &item)
{
    is >> item.name >> item.address;

    return is;
}

// 打印类数据到输出流
std::ostrean print(std::ostrean &os, const Persong &item)
{
    
//    os << item.name << item.address;
//    似乎这样比较好
    os << item.getName() << item.getAdd();
    
    return os;
}