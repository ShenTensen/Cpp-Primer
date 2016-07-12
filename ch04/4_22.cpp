//
//  4_22.cpp
//  ch04
//
//  Created by ShenTensen on 16/1/30.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string finalgrade;
    int grade = 76;
    
//    finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail"
//                            : (grade > 75) ? "pass" : "low pass";
 
    if (grade > 90)
        finalgrade = "high pass";
    else if (grade < 60)
        finalgrade = "fail";
    else if ( grade > 75)
        finalgrade = "pass";
    else
        finalgrade = "low pass";
    
    cout << finalgrade << endl;
    
    return 0;
}
