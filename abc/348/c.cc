#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

int
main(void)
{
	long n;
	std::cin >> n;

	std::map<long, std::vector<long>> m;
	for (long i = 0; i < n; i++) {
		long a, c;
		std::cin >> a >> c;
		m[c].push_back(a);
	}

	std::set<long> s;
	for (const auto &e: m)
		s.insert(*std::min_element(e.second.begin(), e.second.end()));
	std::cout << *std::max_element(s.begin(), s.end()) << std::endl;

	return 0;
}
