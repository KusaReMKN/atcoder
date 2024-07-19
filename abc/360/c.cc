#include <iostream>
#include <iterator>
#include <set>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	std::vector<int> w(n);
	for (auto &e: w)
		std::cin >> e;

	std::vector<std::multiset<int>> s(n);
	for (int i = 0; i < n; i++)
		s[a[i]-1].insert(w[i]);

	long sum = 0;
	for (const auto &e: s)
		if (e.size() > 1)
			for (auto itr = std::next(e.rbegin()); itr != e.rend(); itr++)
				sum += *itr;
	std::cout << sum << std::endl;

	return 0;
}
