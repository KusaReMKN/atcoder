#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> v(3200/400, 0);
	int free = 0;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;

		if (a < 3200)
			v[a/400]++;
		else
			free++;
	}

	int cnt = 0;
	for (const auto &e: v)
		if (e > 0)
			cnt++;

	std::cout << (cnt ? cnt : 1) << " " << cnt+free << std::endl;

	return 0;
}
