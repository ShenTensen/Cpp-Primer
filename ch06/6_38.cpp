//
//  6_38.cpp
//  ch06
//
//  Created by ShenTensen on 16/7/20.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

int odd[] = {1, 3, 5, 7, 9};
int even[] = {2, 4, 6, 8, 10};

// 不明所以
decltype(odd) *arrPtr(int i)
{
    return (i % 2) ? &odd : &even;
}

decltype(&odd) arrPtr(int i);       // 这样又该怎么理解？

// https://github.com/pezy/CppPrimer/tree/master/ch06
//decltype(odd)& arrPtr(int i)
//{
//    return (i % 2) ? odd : even;
//}

int main()
{
    
    
    return 0;
}