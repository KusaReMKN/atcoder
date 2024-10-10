#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}

	long sum = 0;
	for (const auto &e: m)
		sum += e.second * (e.second-1L) / 2;
	std::cout << sum << std::endl;

	return 0;
}
