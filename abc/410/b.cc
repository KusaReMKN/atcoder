#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	std::vector<int> b(n, 0);
	for (int i = 0; i < q; i++) {
		int x;
		std::cin >> x;

		if (x > 0) {
			b[x-1]++;
			std::cout << x << ' ';
		} else {
			auto min = std::min_element(b.begin(), b.end());
			std::cout << std::distance(b.begin(), min) + 1 << ' ';
			++*min;
		}
	}
	std::cout << std::endl;

	return 0;
}
