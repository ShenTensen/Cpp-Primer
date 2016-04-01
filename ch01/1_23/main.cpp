//
//  main.cpp
//  1_23
//
//  Created by ShenTensen on 15/10/17.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"
const int N = 20;

int main()
{
    Sales_item book[N];
    int i = 0;
    
    while (std::cin >> book[i++] && i < N)
        ;
    for (int j = 0; j < i; j++)
    {
        for (int k = j + 1; k < i; k++)
            if (book[k].isbn() == book[j].isbn())
                book[j] += book[k];
        
    }
    
    for (int j = 0)
    return 0;
}
