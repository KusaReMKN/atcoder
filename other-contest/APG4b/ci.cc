#include <algorithm>
#include <iostream>

int
main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;

	auto max = std::max({ a, b, c });
	auto min = std::min({ a, b, c });
	std::cout << max-min << std::endl;
	return 0;
}
