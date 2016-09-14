//
//  1_23_test.cpp
//  ch01
//
//  Created by ShenTensen on 16/7/29.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//


#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, valItem;
    if (std::cin >> currItem) {
        int cnt = 1;
        while (std::cin >> valItem) {
            if (valItem.isbn() == currItem.isbn())
                ++cnt;
            else {
                std::cout << currItem << " occurs " << cnt << " times "
                << std::endl;
                currItem = valItem;
                cnt = 1;
            }
        }
        
        std::cout << currItem << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}
