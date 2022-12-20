#include <iostream>

int
main(void)
{
	int n;

	std::cin >> n;
	for (int i = 0; i < (n-1)/9+1; i++)
		std::cout << (n%9 ? n%9 : 9);
	std::cout << std::endl;

	return 0;
}
