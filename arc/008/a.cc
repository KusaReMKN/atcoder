#include <algorithm>
#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	auto sum = n / 10 * 100;
	n %= 10;
	std::cout << std::min(sum + 15 * n, sum + 100) << std::endl;

	return 0;
}
