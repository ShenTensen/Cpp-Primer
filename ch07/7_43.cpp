//
//  7_43.cpp
//  ch07
//
//  Created by ShenTensen on 16/9/7.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <vector>
using std::vector;

class NoDefault {
public:
    NoDefault(int j): i(j) { }
    
private:
    int i;
};

class C {
public:
    C(): a(0) {}
    
private:
    NoDefault a;
};



int main()
{
    // vector<NoDefault> vec(10);   // 错误
    vector<C> vec2(10);
    
    return 0;
}
