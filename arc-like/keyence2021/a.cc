#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	std::cin >> a[0];
	for (int i = 1; i < n; i++) {
		int t;
		std::cin >> t;
		a[i] = std::max(a[i-1], t);
	}

	int b;
	std::cin >> b;

	long c0 = (long)a[0] * b;
	std::cout << c0 << std::endl;
	for (int i = 1; i < n; i++) {
		std::cin >> b;
		std::cout << (c0 = std::max(c0, (long)a[i]*b)) << std::endl;
	}

	return 0;
}
