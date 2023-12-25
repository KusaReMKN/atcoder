#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> b0(m);
	std::cin >> b0[0];
	for (int i = 1; i < m; i++) {
		std::cin >> b0[i];
		if (b0[i] - b0[i-1] != 1) {
			std::clog << -2 << std::endl;
			std::cout << "No" << std::endl;
			return 0;
		}
	}
	if (7 - (b0[0] - 1) % 7 < m) {
		std::clog << -1 << std::endl;
		std::cout << "No" << std::endl;
		return 0;
	}

	std::vector<int> b(m);
	for (int i = 1; i < n; i++) {
		for (auto &e: b)
			std::cin >> e;
		for (int j = 0; j < m; j++)
			if (b[j] - b0[j] != 7) {
				std::clog << i << ':' << j << ':'
					<< b[j] << ':' << b0[j] << std::endl;
				std::cout << "No" << std::endl;
				return 0;
			}
		std::copy(b.begin(), b.end(), b0.begin());
	}
	std::cout << "Yes" << std::endl;

	return 0;
}
