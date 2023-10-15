#include <iostream>

int
main(void)
{
	long n;
	std::cin >> n;

	while (n > 1)
		if (n % 2 == 0)
			n /= 2;
		else if (n % 3 == 0)
			n /= 3;
		else {
			std::cout << "No" << std::endl;
			return 0;
		}
	std::cout << "Yes" << std::endl;

	return 0;
}
