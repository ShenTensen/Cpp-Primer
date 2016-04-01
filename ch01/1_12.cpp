//1.12
#include <iostream>

int main ()
{
	int i = 0, j = 0;
	int sum = 0;

	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << "Sum is " << sum << std::endl;
    
	return 0;
}