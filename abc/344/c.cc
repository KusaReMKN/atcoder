#include <iostream>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<long> a;
	for (int i = 0; i < n; i++) {
		int t;
		std::cin >> t;
		a.insert(t);
	}

	int m;
	std::cin >> m;

	std::set<long> b;
	for (int i = 0; i < m; i++) {
		int t;
		std::cin >> t;
		b.insert(t);
	}

	int l;
	std::cin >> l;

	std::set<long> c;
	for (int i = 0; i < l; i++) {
		int t;
		std::cin >> t;
		c.insert(t);
	}

	std::set<long> s;
	for (const auto &e: a)
		for (const auto &v: b)
			for (const auto &i: c)
				s.insert(e + v + i);

	int q;
	std::cin >> q;

	for (int i = 0; i < q; i++) {
		int x;
		std::cin >> x;

		std::cout << (s.count(x) ? "Yes" : "No") << std::endl;
	}

	return 0;
}
