#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n, m, q;
	std::cin >> n >> m >> q;

	std::vector<int> total(m);
	std::vector<std::set<int>> solved(n);
	for (int i = 0; i < q; i++) {
		int f, n, m;
		int sum = 0;
		std::cin >> f;
		switch (f) {
		case 1:
			std::cin >> n;
			for (const auto &e: solved[n-1])
				sum += solved.size() - total[e-1];
			std::cout << sum << std::endl;
			break;
		case 2:
			std::cin >> n >> m;
			solved[n-1].insert(m);
			total[m-1]++;
			break;
		}
	}

	return 0;
}
