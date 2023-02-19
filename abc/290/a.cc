#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	int sum = 0;
	for (int i = 0; i < m; i++) {
		int b;
		std::cin >> b;
		sum += a[b-1];
	}
	std::cout << sum << std::endl;

	return 0;
}
