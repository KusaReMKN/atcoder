#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	std::map<int, std::vector<int>> m;
	for (int i = 0; i < n; i++)
		m[a[i]].push_back(i);

	for (int i = 0; i < n; i++) {
		auto itr = std::lower_bound(m[a[i]].begin(), m[a[i]].end(), i);
		std::cout << (i > 0 ? " " : "")
			<< (itr == m[a[i]].begin() ? -1 : *--itr + 1);
	}
	std::cout << std::endl;

	return 0;
}
