#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	int max = 0;
	for (int i = 0; i <= n; i++) {
		int c = 0;
		for (const auto e: a)
			if (e >= i)
				c++;
		if (i <= c)
			max = i;
	}
	std::cout << max << std::endl;

	return 0;
}
