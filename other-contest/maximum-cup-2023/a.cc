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

	long cnt = 0;
	for (const auto &e: m)
		cnt += (long)e.second * (e.second-1) / 2;
	std::cout << cnt << std::endl;

	return 0;
}
