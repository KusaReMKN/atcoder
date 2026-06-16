#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::vector<int>> m(n);
	for (int i = 0; i < n; i++) {
		int k;
		std::cin >> k;
		for (int j = 0; j < k; j++) {
			int a;
			std::cin >> a;
			m[a-1].push_back(i+1);
		}
	}
	for (const auto &e: m) {
		std::cout << e.size();
		for (const auto &v: e)
			std::cout << ' ' << v;
		std::cout << std::endl;
	}

	return 0;
}
