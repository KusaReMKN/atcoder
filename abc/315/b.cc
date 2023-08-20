#include <iostream>
#include <numeric>
#include <vector>

int
main(void)
{
	int m;
	std::cin >> m;

	std::vector<int> d(m);
	for (auto &e: d)
		std::cin >> e;

	auto sum = std::reduce(d.begin(), d.end(), 0);
	auto mid = sum / 2;

	for (int i = 0; i < m; i++) {
		if (mid < d[i]) {
			std::cout << i+1 << " " << mid+1 << std::endl;
			break;
		}
		mid -= d[i];
	}

	return 0;
}
