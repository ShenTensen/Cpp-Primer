//
//  5_22.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/21.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    
//    begin:
//        int sz = get_size();
//    if (sz <= 0)
//    {
//        goto begin;
//    }
   // 并非完整程序，所以无法运行
    int sz = get_size();
    while (sz <= 0)
        sz = get_size();
    
    return 0;
}
