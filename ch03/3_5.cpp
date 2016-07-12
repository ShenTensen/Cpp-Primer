// 练习 3.5

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
	string str1, str2, str3;

	cout << "Enter 3 strings" << endl;
	cin >> str1 >> str2 >> str3;
	str1 = str1 + ' ' + str2 + ' ' + str3;
	cout << str1 << endl;

	return 0;
}
