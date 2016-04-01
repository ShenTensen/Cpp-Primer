//
//  main.cpp
//  1_22
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
    Sales_item sum;
    int i = 0;
    
    while (std::cin >> book[i] && i < N)
        i++;
    sum = book[0];     //如果sum未被初始化则输出会有问题
    for (int j = 1; j < i; j++)
        sum += book[j];
    std::cout << sum << std::endl;
    
    return 0;
}
