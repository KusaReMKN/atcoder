#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;
	n--;

	std::cout << ((n / 20 & 1) ? 19 - n % 20 : n % 20) + 1 << std::endl;

	return 0;
}
