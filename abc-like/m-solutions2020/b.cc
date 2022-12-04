#include <iostream>

int
main(void)
{
	int a, b, c, k;

	std::cin >> a >> b >> c >> k;
	for (int i = 0; i < k; i++) {
		if (a >= b)
			b <<= 1;
		else
			c <<= 1;
	}
	std::cout << (a < b && b < c ? "Yes" : "No") << std::endl;

	return 0;
}
