#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<int> c(n);
	for (auto &e: c)
		std::cin >> e;

	std::vector<int> p(n);
	for (auto &e: p)
		std::cin >> e;

	std::map<int, int> m;
	for (int i = 0; i < n; i++)
		if (m[c[i]] == 0)
			m[c[i]] = p[i];
		else
			m[c[i]] = std::min(m[c[i]], p[i]);

	if (m.size() < k) {
		std::cout << -1 << std::endl;
		return 0;
	}

	std::multiset<int> s;
	for (const auto &e: m)
		s.insert(e.second);

	auto itr = s.begin();
	long sum = 0;
	for (int i = 0; i < k; i++)
		sum += *itr++;
	std::cout << sum << std::endl;

	return 0;
}
