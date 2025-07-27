#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n, m, q;
	std::cin >> n >> m >> q;

	std::vector<std::set<int>> g(n+1);
	for (int i = 0; i < q; i++) {
		int f, x, y;
		std::cin >> f >> x;
		switch (f) {
		case 1:
			std::cin >> y;
			g[x].insert(y);
			break;
		case 2:
			g[0].insert(x);
			break;
		case 3:
			std::cin >> y;
			std::cout << (g[0].count(x) || g[x].count(y) ? "Yes" : "No") << std::endl;
			break;
		}
	}

	return 0;
}
