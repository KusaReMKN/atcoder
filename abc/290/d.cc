#include <iostream>
#include <numeric>

int
main(void)
{
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n, d, k;
		std::cin >> n >> d >> k;

		auto lcm = std::lcm((long)n, (long)d);
		auto p = (k - 1L) * d;
		std::cout << p % n + p / lcm << std::endl;
	}

	return 0;
}
