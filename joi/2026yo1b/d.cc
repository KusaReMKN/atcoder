#include <cstdlib>
#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> c(n);
	std::map<int, std::vector<int>> m;
	for (int i = 0; i < n; i++) {
		std::cin >> c[i];
		m[c[i]].push_back(i);
	}

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (const auto &e: m[c[i]])
			sum += std::abs(i-e);
		std::cout << sum << std::endl;
	}

	return 0;
}
