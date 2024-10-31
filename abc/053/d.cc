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

	int sum = 0;
	for (const auto &e: m)
		if (e.second > 1)
			sum += e.second - 1;
	std::cout << n - (sum+1) / 2 * 2 << std::endl;

	return 0;
}
