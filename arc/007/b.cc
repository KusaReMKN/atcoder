#include <iostream>
#include <utility>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> c(n+1);
	for (int i = 0; i <= n; i++)
		c[i] = i;

	for (int i = 0; i < m; i++) {
		int d;
		std::cin >> d;
		auto itr = std::find(c.begin(), c.end(), d);
		auto k = std::distance(c.begin(), itr);
		std::swap(c[0], c[k]);
	}

	for (int i = 1; i <= n; i++)
		std::cout << c[i] << std::endl;

	return 0;
}
