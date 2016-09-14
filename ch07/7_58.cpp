//
//  7_58.cpp
//  ch07
//
//  Created by ShenTensen on 16/9/9.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <vector>
using std::vector;

class Example {
public:
    static constexpr double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec;
    static const int period = 30;
    double daily[period];
};

// example.C
//#include "example.h"
constexpr double Example::rate;
vector<double> Example::vec(Example::vecSize);

int main()
{
    
    
    return 0;
}