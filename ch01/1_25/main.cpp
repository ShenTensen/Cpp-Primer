//
//  main.cpp
//  1_25
//
//  Created by ShenTensen on 15/10/17.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    
    return 0;
}
