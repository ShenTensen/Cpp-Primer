// C++ Primer 
// Chapter6 Excercise 6.9
// 2016.7.12
// fact.cpp

#include "Chapter6.h"           // 在这个程序中，这段代码无可无不可

int fact (int val)
{
    int ret = 1;
    
    while (val > 1)
        ret *= val--;
    
    return ret;
}