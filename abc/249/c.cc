#include <iostream>
#include <map>
#include <string>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<std::string> s(n);
	for (auto &e: s)
		std::cin >> e;

	int max = 0;
	for (int i = 0; i < 1 << n; i++) {
		std::map<int, int> m;
		for (int j = 0; j < n; j++) {
			auto p = 1 << j;
			if (i & p)
				for (const auto &c: s[j])
					m[c]++;
		}
		int cnt = 0;
		for (const auto &e: m)
			if (e.second == k)
				cnt++;
		if (max < cnt)
			max = cnt;
	}
	std::cout << max << std::endl;

	return 0;
}
