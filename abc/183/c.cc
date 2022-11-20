#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<std::vector<int>> t(n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			int tt;
			std::cin >> tt;
			t[i].push_back(tt);
		}

	std::vector<int> v;
	for (int i = 2; i <= n; i++)
		v.push_back(i);

	int res = 0;
	do {
		int time = 0;
		int last = 1;
		std::cerr << last;
		for (auto i: v) {
			std::cerr << "-" << i;
			time += t[last-1][i-1];
			last = i;
		}
		time += t[last-1][0];
		std::cerr << "-1:" << time << std::endl;
		if (k == time)
			res++;
	} while (std::next_permutation(v.begin(), v.end()));
	std::cout << res << std::endl;

	return 0;
}
