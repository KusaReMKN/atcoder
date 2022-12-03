#include <algorithm>
#include <iostream>

int
main(void)
{
	int n, a, b;

	std::cin >> n >> a >> b;
	std::cout << std::min(n, 5) * b + std::max(n-5, 0) * a << std::endl;

	return 0;
}
