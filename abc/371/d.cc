#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<long> x(n);
	for (auto &e: x)
		std::cin >> e;

	std::vector<long> p(n);
	for (auto &e: p)
		std::cin >> e;

	long prev = 0;
	std::map<long, long> m;
	for (int i = n; i-- > 0; ) {
		m[x[i]] = prev + p[i];
		prev = m[x[i]];
	}

	int q;
	std::cin >> q;

	for (int i = 0; i < q; i++) {
		long l, r;
		std::cin >> l >> r;

		auto litr = m.lower_bound(l);
		auto ritr = m.lower_bound(r+1);

		std::cout << litr->second - ritr->second << std::endl;
	}

	return 0;
}
