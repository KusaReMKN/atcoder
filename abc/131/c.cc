#include <numeric>
#include <iostream>

long
sub(long a, long c, long d)
{
	auto x = a / c;
	auto y = a / d;
	auto z = a / std::lcm(c, d);

	return (a - 1) - x - y + z;
}

int
main(void)
{
	long a, b, c, d;
	std::cin >> a >> b >> c >> d;

	std::cout << sub(b, c, d) - sub(a-1, c, d) << std::endl;

	return 0;
}
