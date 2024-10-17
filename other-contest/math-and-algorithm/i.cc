#include <iostream>
#include <set>

int
main(void)
{
	int n, s;
	std::cin >> n >> s;

	std::set<int> v;
	v.insert(0);
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		std::set<int> w;
		for (const auto &e: v)
			if (e+a <= s)
				w.insert(e+a);
		for (const auto &e: w)
			v.insert(e);
		if (v.count(s) > 0) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}
	std::cout << "No" << std::endl;

	return 0;
}
