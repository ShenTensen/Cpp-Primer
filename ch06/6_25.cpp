// C++ Primer 练习6.25
//
//

#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		string s = strcat(argv[1], argv[2]);
		cout << s << endl;
	} else {
		cout << "实参个数有误！" << endl;
		exit(1);
	}
		
	return 0;
}