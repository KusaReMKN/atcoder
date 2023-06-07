#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>

static inline long
p(long a)
{
	return a * a;
}

int
main(void)
{
	int n;
	long d;
	std::cin >> n >> d;

	std::vector<std::pair<int, int>> v(n);
	for (auto &e: v)
		std::cin >> e.first >> e.second;

	std::vector<int> infect = { 0 };
	for (int k = 0; k < infect.size(); k++) {
		auto q = infect[k];
		for (int i = 0; i < n; i++) {
			if (std::find(infect.begin(), infect.end(), i)
					!= infect.end())
				continue;
			if (p(v[q].first - v[i].first)
						+ p(v[q].second - v[i].second)
					<= d * d)
				infect.push_back(i);
		}
	}
	std::sort(infect.begin(), infect.end());

	int p = 0;
	for (int i = 0; i < n; i++)
		if (infect[p] == i) {
			std::cout << "Yes" << std::endl;
			p++;
		} else {
			std::cout << "No" << std::endl;
		}

	return 0;
}
