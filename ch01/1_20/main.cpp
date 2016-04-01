//
//  main.cpp
//  salebook
//
//  Created by ShenTensen on 15/10/16.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main(int argc, const char * argv[]) {
    Sales_item book[100];   //连续内存，动态内存如何呢？
    int i = 0;

    while (std::cin >> book[i])
    {
        i++;
    }
    for (int j = 0; j < i; j++)
        std::cout << book[j] << std::endl;
    
    return 0;
}

