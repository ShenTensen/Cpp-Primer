//
//  1_19.cpp
//  salebook
//
//  Created by ShenTensen on 15/10/16.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>

int main ()
{
    int i = 0, j = 0;
    
    std::cout << "Enter two interger " << std::endl;
    std::cin >> i >> j;
    if (i > j)
        while (j <= i)
        {
            std::cout << j << std::endl;
            j++;
        }
    else
        while (i <= j)
        {
            std::cout << i << std::endl;
            i++;
        }
    return 0;
}