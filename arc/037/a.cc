#include <iostream>

int
main(void)
{
	int n, m;
	int sum;

	std::cin >> n;
	sum = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> m;
		if (m < 80)
			sum += 80 - m;
	}
	std::cout << sum << std::endl;

	return 0;
}
