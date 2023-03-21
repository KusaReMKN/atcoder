#include <algorithm>
#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	int max = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		max = std::max(max, a+b);
	}
	std::cout << max << std::endl;

	return 0;
}
