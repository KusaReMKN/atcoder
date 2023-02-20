#include <algorithm>
#include <iostream>

int
main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;

	auto max = std::max({ a, b, c });
	auto sum = 3 * max - (a + b + c);
	std::cout << sum << std::endl;

	return 0;
}
