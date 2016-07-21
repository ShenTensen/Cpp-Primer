//
//  6_10.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/13.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

void wrap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int p = 10, q = 5;
    
    cout << "p = " << p << " q = " << q << endl;
    wrap(&p, &q);
    cout << "p = " << p << " q = " << q << endl;
    
    return 0;
}

