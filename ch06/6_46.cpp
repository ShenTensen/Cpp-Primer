//
//  6_46.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/21.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

constexpr bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    cout << isShorter("younger", "great") << endl;
    
    return 0;
}
