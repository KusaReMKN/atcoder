#include <iostream>
#include <utility>
#include <vector>

#define MOD	998244353

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		std::pair<int, int> t;
		std::cin >> t.first >> t.second;
		v.push_back(t);
	}

	std::vector<std::pair<int, int>> dp;
	dp.push_back(std::make_pair(1, 1));
	for (int i = 1; i < n; i++) {
		std::pair<int, int> t(0, 0);
		for (int j = 0; j < 4; j++) {
			auto prev = (j & 1 ? v[i-1].first : v[i-1].second);
			auto curr = (j & 2 ? v[i-0].first : v[i-0].second);
			auto back = dp.back();
			if (prev != curr)
				*(j & 2 ? &t.first : &t.second)
					+= (j & 1 ? back.first : back.second);
		}
		t.first  %= MOD;
		t.second %= MOD;
		dp.push_back(t);
	}
	std::cout << (dp.back().first + dp.back().second) % MOD << std::endl;

	return 0;
}
