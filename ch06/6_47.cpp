// C++ Primer 练习6.47
// 6_47.cpp
//

#include <iostream>
#include <vector>
#include <cassert>
using std::cout;
using std::endl;
using std::vector;
using std::cerr;

// using ITER = vector<int>::iterator;      // 类型别名

void printVector(vector<int>::iterator beg, vector<int>::iterator end)
{
    if (beg != end)
    {
        // 检测 NDEBUG 预处理变量
    	#ifndef NDEBUG
    		cerr << "Error: " << __FILE__ 
    			<< " in function " << __func__
    			<< " at line " << __LINE__ << endl;
    	#endif		
        cout << (*beg) << endl;
        printVector(++beg, end);
    } else
        return;
}

int main()
{
    //vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};     不被支持，终端编译时！
    vector<int> v(10, 1);
    printVector(v.begin(), v.end());
    
    return 0;
}
