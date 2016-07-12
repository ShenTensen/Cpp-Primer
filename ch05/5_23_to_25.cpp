//
//  5_23_to_25.cpp
//  ch05
//
//  Created by ShenTensen on 16/2/22.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#include <iostream>
#include <stdexcept>
using namespace std;
//using std::cout;
//using std::cin;
//using std::endl;

int main()
{
    int divisor; // 除数
    int dividend; // 被除数
    
//    cin >> dividend >> divisor;
//    
//    if (divisor == 0)
//        // throw ("divisor can't be 0!");
//        throw std::runtime_error("divisor can't be 0!");
//    cout << dividend / divisor << endl;
//
    cout << "Enter dividend and divisor: " << endl;
    while (cin >> dividend >> divisor)
    {
        try {
            if (divisor == 0)
                throw runtime_error ("divisor can't be 0!");
            cout << dividend / divisor << endl;
        } catch (runtime_error err) {
            cout << err.what()
                << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
        cout << "Enter dividend and divisor: ";
    }
    
    return 0;
}
