#include <iostream>

int
main(void)
{
	int n;

	std::cin >> n;
	std::cout << '1';
	for (int i = 0; i < n-1; i++)
		std::cout << '0';
	std::cout << '7' << std::endl;

	return 0;
}
