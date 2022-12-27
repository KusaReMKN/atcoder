#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n), b(n), c(n);
	for (auto &e: a)
		std::cin >> e;
	for (auto &e: b)
		std::cin >> e;
	for (auto &e: c)
		std::cin >> e;

	std::map<int, int> m;
	for (const auto &e: c)
		m[b[e-1]]++;

	long sum = 0;
	for (const auto &e: a)
		sum += m[e];
	std::cout << sum << std::endl;

	return 0;
}
