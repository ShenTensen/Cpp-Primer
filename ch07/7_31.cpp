//
//  7_31.cpp
//  ch07
//
//  Created by ShenTensen on 16/7/30.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

//#include <iostream>

class Y;

class X {
public:
    int i;
    Y *next;
};

class Y {
public:
    int j;
    X next;
};

// 测试
//int main()
//{
//    X xray;
//    Y yoo;
//    
//    xray.i = 10;
//    xray.next = &yoo;
//    yoo.j = 22;
//    yoo.next = xray;
//    std::cout << xray.next << std::endl;
//       
//    return 0;
//}