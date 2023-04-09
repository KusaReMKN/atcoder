#include <iostream>

int
main(void)
{
	int n, d;
	std::cin >> n >> d;

	int t0;
	std::cin >> t0;
	for (int i = 1; i < n; i++) {
		int t;
		std::cin >> t;
		if (t - t0 <= d) {
			std::cout << t << std::endl;
			return 0;
		}
		t0 = t;
	}
	std::cout << -1 << std::endl;

	return 0;
}
