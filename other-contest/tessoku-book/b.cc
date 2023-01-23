#include <iostream>

int
main(void)
{
	int n, x;
	std::cin >> n >> x;

	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		if (a == x) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}
	std::cout << "No" << std::endl;

	return 0;
}
