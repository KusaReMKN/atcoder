#include <iostream>
#include <set>

int
main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;

	std::set<int> r;
	for (int i = 0; ; i++) {
		auto rem = (60 * i + c) % (a + b);
		if (rem <= a) {
			std::cout << 60 * i + c << std::endl;
			return 0;
		}
		if (r.count(rem) > 0) {
			std::cout << -1 << std::endl;
			return 0;
		}
		r.insert(rem);
	}

	return -1;
}
