#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::vector<int>> g(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		g[a-1].push_back(b);
		g[b-1].push_back(a);
	}

	for (int i = 0; i < n; i++) {
		std::cout << i+1 << ": {";
		bool first = true;
		for (const auto &e: g[i]) {
			if (!first)
				std::cout << ", ";
			std::cout << e;
			first = false;
		}
		std::cout << "}" << std::endl;
	}

	return 0;
}
