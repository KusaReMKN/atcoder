#include <algorithm>
#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	long sum = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;

		sum += std::min(a / 2, b);
	}
	std::cout << sum << std::endl;

	return 0;
}
