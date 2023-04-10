#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<std::string, int> m;
	for (int i = 0; i < n; i++) {
		int k;
		std::cin >> k;
		for (int i = 0; i < k; i++) {
			std::string s;
			std::cin >> s;
			m[s]++;
		}
	}

	int cnt = 0;
	for (const auto &e: m)
		if (e.second == n)
			cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
