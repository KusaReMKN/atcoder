#include <iostream>

int
main(void)
{
	int a, b, c, s;
	std::cin >> a >> b >> c >> s;

	for (int i = 0; i < 8; i++) {
		auto sum = 0;
		sum += (i & 1) ? a : a + 1;
		sum += (i & 2) ? b : b + 1;
		sum += (i & 4) ? c : c + 1;
		if (sum == s) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}
	std::cout << "No" << std::endl;

	return 0;
}
