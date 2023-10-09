#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> x(n);
	for (auto &e: x)
		std::cin >> e;

	int pos = 0;
	for (int i = 0; i < m; i++) {
		int k;
		std::cin >> k;
		pos += k;
		if (pos < n-1)
			pos += x[pos];
		if (pos >= n-1) {
			std::cout << i+1 << std::endl;
			return 0;
		}
	}

	return -1;
}
