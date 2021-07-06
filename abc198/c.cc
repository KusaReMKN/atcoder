#include <bits/stdc++.h>

int main(void)
{
	long double r, x, y;

	std::cin >> r >> x >> y;
	auto d = std::hypot(x, y);

	if (d == r)
		std::cout << 1 << std::endl;
	else if (d <= 2 * r)
		std::cout << 2 << std::endl;
	else
		std::cout << std::ceil(d / r) << std::endl;

	return 0;
}
