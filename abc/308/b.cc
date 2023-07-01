#include <iostream>
#include <map>
#include <vector>
#include <string>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::string> c(n);
	for (auto &e: c)
		std::cin >> e;

	std::vector<std::string> d(m);
	for (auto &e: d)
		std::cin >> e;

	int p0;
	std::cin >> p0;
	std::map<std::string, int> v;
	for (const auto &e: d) {
		int p;
		std::cin >> p;
		v[e] = p;
	}

	long sum = 0;
	for (const auto &e: c) {
		auto p = v[e];
		if (p == 0)
			p = p0;
		sum += p;
	}
	std::cout << sum << std::endl;

	return 0;
}
