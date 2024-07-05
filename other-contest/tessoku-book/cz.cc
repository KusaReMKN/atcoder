#include <iostream>
#include <numeric>

int
main(void)
{
	long a, b;

	std::cin >> a >> b;
	std::cout << std::lcm(a, b) << std::endl;

	return 0;
}
