#include <iostream>
#include <vector>

int
main(void)
{
	int n = 8;

	std::vector<int> s(n);
	for (auto &e: s)
		std::cin >> e;

	if (s[0] < 100 || 675 < s[0] || s[0] % 25 != 0) {
		std::cout << "No" << std::endl;
		return 0;
	}

	for (int i = 1; i < n; i++) {
		if (s[i-1] > s[i-0]) {
			std::cout << "No" << std::endl;
			return 0;
		}
		if (s[i] < 100 || 675 < s[i] || s[i] % 25 != 0) {
			std::cout << "No" << std::endl;
			return 0;
		}
	}
	std::cout << "Yes" << std::endl;

	return 0;
}
