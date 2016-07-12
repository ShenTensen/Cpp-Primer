//
//  5_10.cpp
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
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;       // 统计元音字母
    
    cout << "Enter char,if you want to end this program, enter ctrl+d" << endl;
    
    while (cin >> ch)
    {
        switch (ch)
        {
                case 'a': case 'A':
                    ++aCnt;
                    break;
                case 'e': case 'E':
                    ++eCnt;
                    break;
                case 'i': case 'I':
                    ++iCnt;
                    break;
                case 'o': case 'O':
                    ++oCnt;
                    break;
                case 'u': case 'U':
                    ++uCnt;
                    break;
        }
    }

    cout << "aCnt = " << aCnt << "\teCnt = " << eCnt << "\tiCnt = " << iCnt
    << "\noCnt = " << oCnt << "\tuCnt = " << uCnt << endl;
   
    return 0;
}










