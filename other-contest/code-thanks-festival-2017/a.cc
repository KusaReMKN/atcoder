#include <algorithm>
#include <iostream>

int
main(void)
{
	int max = 0;
	for (int i = 0; i < 8; i++) {
		int t;
		std::cin >> t;
		max = std::max(max, t);
	}
	std::cout << max << std::endl;

	return 0;
}
