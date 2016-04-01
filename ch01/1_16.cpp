//1.16
#include <iostream>

int main ()
{
	int i = 0, j = 0;
	//输入contrl + d才终止
	while (std::cin >> i)
	{
		j += i;
	}
	std::cout << j << std::endl;

	return 0;
}