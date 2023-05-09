#include <algorithm>
#include <iostream>

int
main(void)
{
	int a, b, k, l;
	std::cin >> a >> b >> k >> l;

	auto sum = (long)k / l * b;
	k %= l;
	std::cout << std::min(sum + a * k, sum + b) << std::endl;

	return 0;
}
