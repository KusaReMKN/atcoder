#include <cstdlib>
#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	int T, X, Y;
	T = X = Y = 0;
	for (int i = 0; i < n; i++) {
		int t, x, y;
		std::cin >> t >> x >> y;

		auto d = std::abs(x - X) + std::abs(y - Y);
		if (d > t - T) {
			std::cout << "No" << std::endl;
			return 0;
		}
		if ((d - (t - T)) % 2 != 0) {
			std::cout << "No" << std::endl;
			return 0;
		}
		T = t;
		X = x;
		Y = y;
	}
	std::cout << "Yes" << std::endl;

	return 0;
}
