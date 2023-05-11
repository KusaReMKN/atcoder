#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;
	std::sort(a.begin(), a.end());

	std::vector<int> b(m);
	for (auto &e: b)
		std::cin >> e;
	std::sort(b.begin(), b.end());

	long min = 999999999L;
	int i = 0, j = 0;
	while (i < n && j < m) {
		min = std::min(min, std::abs((long)a[i] - b[j]));
		if (a[i] > b[j])
			j++;
		else
			i++;
	}

	std::cout << min << std::endl;

	return 0;
}
