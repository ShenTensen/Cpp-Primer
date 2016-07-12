//
//  5_9.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/18.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    char ch;
    unsigned int vowelCnt = 0;       // 统计元音字母
    
    while (cin >> ch)
    {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
            || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
            || ch == 'u' || ch == 'U')
            ++vowelCnt;
    }
    
    cout << "vowelCnt = " << vowelCnt << endl;
    
    return 0;
}
