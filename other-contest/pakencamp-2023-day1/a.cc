#include <iostream>
#include <map>

int
main(void)
{
	long n;
	std::cin >> n;

	std::map<int, long> m;
	for (long i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}

	for (const auto &e: m)
		if (e.second <= 10) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	std::cout << "No" << std::endl;

	return 0;
}
