#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	if (n < 2015 || n == 2017)
		std::cout << -1;
	else
		switch (n) {
		case 2015:
			std::cout << 1;
			break;
		case 2016:
			std::cout << 2;
			break;
		default:
			std::cout << n - 2015;
		}
	std::cout << std::endl;

	return 0;
}
