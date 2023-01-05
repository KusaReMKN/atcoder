#include <iostream>

int
main(void)
{
	int x, y;

	std::cin >> x >> y;
	if (x % y == 0) {
		std::cout << -1 << std::endl;
		return 0;
	}

	long i;
	for (i = 0; x*i % y == 0; i++)
		;
	std::cout << x*i << std::endl;

	return 0;
}
