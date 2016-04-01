//
//  main.cpp
//  1_21
//
//  Created by ShenTensen on 15/10/17.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2;
    
    std::cin >> book1 >> book2;
    book1 += book2;
    std::cout << book1 + book2 << std::endl;
    
    return 0;
}
