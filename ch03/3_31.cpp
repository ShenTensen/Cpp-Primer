//
//  3_31.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>

int main ()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        arr[i] = i;
    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
    
    int *arr2 = arr;
    for (int i = 0; i < 10; i++)
        std::cout << arr2[i] << ' ';
    std::cout << std::endl;
    
    return 0;
}