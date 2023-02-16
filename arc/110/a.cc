#include <iostream>
#include <numeric>

int
main(void)
{
	int n;
	std::cin >> n;

	long lcm = 1;
	for (int i = 2; i <= n; i++)
		lcm = std::lcm(lcm, i);
	std::cout << lcm+1 << std::endl;

	return 0;
}
