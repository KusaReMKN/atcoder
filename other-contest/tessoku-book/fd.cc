#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	std::cout << n << std::endl;
	std::cout << n << ' ' << 1 << std::endl;
	for (int i = 1; i < n; i++)
		std::cout << i << ' ' << i+1 << std::endl;

	return 0;
}
