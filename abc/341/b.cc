#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<long> a(n);
	for (auto &e: a)
		std::cin >> e;

	for (auto i = 0; i < n-1; i++) {
		int s, t;
		std::cin >> s >> t;
		a[i+1] += a[i] / s * t;
	}
	std::cout << a[n-1] << std::endl;

	return 0;
}
