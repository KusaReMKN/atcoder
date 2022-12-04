#include <iostream>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		sum += a;
		if (sum >= k) {
			std::cout << i+1 << std::endl;
			return 0;
		}
	}

	return -1;
}
