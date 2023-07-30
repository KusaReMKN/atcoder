#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::set<int>> v(n);
	for (auto &r: v) {
		int k;
		std::cin >> k;
		for (int i = 0; i < k; i++) {
			int a;
			std::cin >> a;
			r.insert(a);
		}
	}

	int p, q;
	std::cin >> p >> q;

	std::set<int> w;
	for (int i = 0; i < p; i++) {
		int b;
		std::cin >> b;
		w.insert(b);
	}

	int sum = 0;
	for (const auto &r: v) {
		auto cnt = std::count_if(r.begin(), r.end(), [&w](int i) {
				return std::find(w.begin(), w.end(), i) != w.end(); });
		if (cnt >= q)
			sum++;
	}
	std::cout << sum << std::endl;

	return 0;
}
