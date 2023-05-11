#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	for (int i = k; i < n; i++)
		std::cout << (a[i-k] < a[i-0] ? "Yes" : "No") << std::endl;

	return 0;
}
