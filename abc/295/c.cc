#include <iostream>
#include <unordered_map>

int
main(void)
{
	int n;
	std::cin >> n;

	std::unordered_map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}

	int sum = 0;
	for (const auto &e: m)
		sum += e.second >> 1;
	std::cout << sum << std::endl;

	return 0;
}
