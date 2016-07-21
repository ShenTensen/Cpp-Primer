//
//  3_34.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>

using namespace std;

int main ()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int * p1 = &arr[9];
    int * p2 = &arr[3];
    int i = int(p2 - p1);   // 不转换也可通过编译
    p1 += p2 - p1;
    cout << i << " " << *p1 << endl;
    
    return 0;
}