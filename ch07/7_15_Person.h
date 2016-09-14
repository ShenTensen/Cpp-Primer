//
//  7_15_Person.h
//  ch07
//
//  Created by ShenTensen on 16/7/26.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#ifndef __15_Person_h
#define __15_Person_h


#include <string>

struct Person {
    std::string name;
    std::string address;
    
    // 构造函数
    Person() = default;
    Person(const std::string &s): name(s) { };
    Person(const std::string &s1, const std::string &s2): name(s1), address(s2) { };
    
    // 成员函数
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




#endif /* __15_Person_h */
