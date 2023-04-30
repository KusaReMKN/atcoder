#include <algorithm>
#include <deque>
#include <iostream>
#include <utility>

int
main(void)
{
	int q;
	std::cin >> q;

	std::deque<std::pair<int, int>> v;
	for (int i = 0; i < q; i++) {
		int f, x, c;
		std::cin >> f;
		switch (f) {
		case 1:
			std::cin >> x >> c;
			v.push_back(std::pair(x, c));
			break;
		case 2:
			std::cin >> c;
			long sum = 0;
			while (c > 0) {
				auto e = v.front();
				v.pop_front();
				auto xx = e.first, cc = e.second;
				auto dd = std::min(c, cc);
				sum += (long)xx * dd;
				c -= dd;
				cc -= dd;
				if (cc > 0)
					v.push_front(std::pair(xx, cc));
			}
			std::cout << sum << std::endl;
			break;
		}
	}

	return 0;
}
