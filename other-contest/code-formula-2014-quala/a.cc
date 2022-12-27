#include <iostream>

int
main(void)
{
	int a;
	std::cin >> a;

	for (int i = 2; a != 1; i++) {
		int cnt = 0;
		while (a % i == 0)
			cnt++, a /= i;
		if (cnt % 3 != 0) {
			std::cout << "NO" << std::endl;
			return 0;
		}
	}
	std::cout << "YES" << std::endl;

	return 0;
}
