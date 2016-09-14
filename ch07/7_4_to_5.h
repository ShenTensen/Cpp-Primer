//
//  7_4.cpp
//  ch07
//
//  Created by ShenTensen on 16/7/25.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <string>

struct Person {
    std::string name;
    std::string address;
    
    std::string getName() const { return name; }
    std::string getAdd() const { return address; }
};

