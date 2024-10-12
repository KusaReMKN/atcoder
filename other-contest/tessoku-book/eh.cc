#include <iostream>
#include <map>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::map<int, int> g;
	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		g[a]++;
		g[b]++;
	}

	int ind = 0;
	int max = 0;
	for (const auto &e: g)
		if (e.second > max) {
			ind = e.first;
			max = e.second;
		}
	std::cout << ind << std::endl;

	return 0;
}
