#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<std::string, long> m;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		std::ranges::sort(s);
		m[s]++;
	}

	long sum = 0;
	for (const auto &e: m)
		sum += e.second * (e.second-1) / 2;
	std::cout << sum << std::endl;

	return 0;
}
