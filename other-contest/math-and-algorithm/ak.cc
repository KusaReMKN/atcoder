#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<long> a(n);
	for (int i = 1; i < n; i++) {
		std::cin >> a[i];
		a[i] += a[i-1];
	}

	int m;
	std::cin >> m;

	long cur, sum = 0;
	int b;
	std::cin >> b;
	cur = a[b-1];
	for (int i = 0; i < m; i++) {
		std::cin >> b;
		sum += std::abs(cur - a[b-1]);
		cur = a[b-1];
	}
	std::cout << sum << std::endl;

	return 0;
}
