#include <algorithm>
#include <iostream>

int
main(void)
{
	long n, a, b;

	std::cin >> n >> a >> b;
	if ((a ^ b) & 1) {
		std::cout << std::min(a-1, n-b) + 1 + (b-a >> 1) << std::endl;
	} else {
		std::cout << (b - a >> 1) << std::endl;
	}

	return 0;
}
