#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> p(n);
	for (auto &pp: p)
		std::cin >> pp;

	std::vector<int> min(n, n);
	for (int i = 0; i < n; i++) {
		std::clog << i << ":" << min[i] << ":";
		for (int j = std::max(0, i-min[i]);
					j <= std::min(i+min[i], n-1); j++) {
			if (i == j)
				continue;
			int d = std::abs(p[i]-p[j]) + std::abs(i-j);
			if (min[i] > d)
				min[i] = d;
			if (min[j] > d)
				min[j] = d;
		}
		std::clog << min[i] << std::endl;
	}

	for (int i = 0; i < n; i++)
		std::cout << (i ? " " : "") << min[i];
	std::cout << std::endl;

	return 0;
}
