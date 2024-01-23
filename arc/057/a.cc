#include <iostream>

int
main(void)
{
	long a, k;
	std::cin >> a >> k;

	constexpr long q = 2e12;
	if (k == 0) {
		std::cout << q - a << std::endl;
	} else {
		int i;
		for (i = 0; a < q; i++)
			a += 1 + k * a;
		std::cout << i << std::endl;
	}

	return 0;
}
