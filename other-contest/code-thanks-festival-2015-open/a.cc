#include <cstdlib>
#include <iostream>

int
main(void)
{
	int a, b;
	std::cin >> a >> b;

	auto sum = 0;
	sum += std::abs(0 - a);
	sum += std::abs(a - b);
	sum += std::abs(b - 0);
	std::cout << sum << std::endl;

	return 0;
}
