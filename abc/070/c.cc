#include <iostream>
#include <numeric>

int
main(void)
{
	int n;
	std::cin >> n;

	long lcm = 1;
	for (int i = 0; i < n; i++) {
		long t;
		std::cin >> t;
		lcm = std::lcm(lcm, t);
	}
	std::cout << lcm << std::endl;

	return 0;
}
