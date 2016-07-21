//
//  3_35.cpp
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
    int * p = arr;
    
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    for (int i = 0; i < 10; i++, p++)
        *p = 0;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}