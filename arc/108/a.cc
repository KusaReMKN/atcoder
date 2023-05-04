#include <iostream>

int
main(void)
{
	long s, p;
	std::cin >> s >> p;

	for (long i = 1; i*i <= p; i++) {
		if (p % i != 0)
			continue;
		auto r = p / i;
		if (r + i == s) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}
	std::cout << "No" << std::endl;

	return 0;
}
