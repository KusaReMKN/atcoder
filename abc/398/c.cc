#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, std::vector<int>> m;
	for (int i = 1; i <= n; i++) {
		int a;
		std::cin >> a;
		m[a].push_back(i);
	}

	int max = 0;
	for (const auto &e: m)
		if (e.second.size() == 1)
			max = std::max(max, e.first);

	if (max > 0)
		std::cout << m[max][0] << std::endl;
	else
		std::cout << -1 << std::endl;

	return 0;
}
