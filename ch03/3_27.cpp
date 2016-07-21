//
//  3_27.cpp
//  Ex_ch03
//
//  Created by ShenTensen on 15/11/22.
//  Copyright © 2015年 ShenTensen. All rights reserved.
//

#include <iostream>

using namespace std;
int txt_size (void);

int main ()
{
    unsigned buf_size = 1024;
    int ia[buf_size];
    int ia2[4 * 7 - 14];
    int ia3[txt_size()];
    //char st[11] = "fundamental";
    
    cout << ia[0] << " " << ia2[0] << " " << ia3[0] << endl;;
    return 0;
}

int txt_size(void)
{
    return 10;
}