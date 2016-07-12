//
//  4_31.cpp
//  ch04
//
//  Created by ShenTensen on 16/2/2.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<size_t> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    
    // 前值版本的递增递减，和后置版本的递增递减。感觉这儿没区别
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;

    int i = 0;
    for (auto a = ivec.begin(); a != ivec.end(); ++a, ++i)
        cout << ivec[i] << " ";
    cout << endl;
    
    return 0;
}
