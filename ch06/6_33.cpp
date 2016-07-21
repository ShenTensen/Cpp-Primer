//
//  6_33.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/19.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
// using ITER = vector<int>::iterator;      // 类型别名

void printVector(vector<int>::iterator beg, vector<int>::iterator end)
{
    if (beg != end)
    {
        cout << (*beg) << endl;
        printVector(++beg, end);
    } else
        return;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printVector(v.begin(), v.end());
    
    return 0;
}
