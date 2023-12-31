#include <iostream>

int
main(void)
{
	int a, b, t;
	std::cin >> a >> b >> t;

	auto d = b - a;
	for (int i = b; ; i += d)
		if (i >= t) {
			std::cout << i << std::endl;
			return 0;
		}

	return -1;
}
