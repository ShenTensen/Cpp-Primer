//
//  5_17.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/21.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1{0, 1, 1, 2, 3, 5, 9}, v2{0, 1, 1, 2, 3, 5, 8};
    
    auto beg1 = v1.begin(), beg2 = v2.begin();
//    对for 循环中间的条件还不是很了解，当使用逗号运算符的时候
//    for ( ; (beg1 != v1.end()) || (beg2 != v2.end()), *beg1 == *beg2; ++beg1, ++beg2)
//    {
//        
//    }

    while ((beg1 != v1.end() || beg2 != v2.end()) && (*beg1 == *beg2))
    {
        ++beg1, ++beg2;
    }

    if (beg1 == v1.end())
        cout << "v1 是 v2 的前缀" << endl;
    else if (beg2 == v2.end())
        cout << "v2 是 v1 的前缀" << endl;
    else
        cout << "v1 与 v2 不相关" << endl;
    
    
    return 0;
}