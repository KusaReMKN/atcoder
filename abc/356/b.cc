#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> a(m);
	for (auto &e: a)
		std::cin >> e;

	std::vector<int> s(m, 0);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			int x;
			std::cin >> x;
			s[j] += x;
		}

	for (int i = 0; i < m; i++)
		if (s[i] < a[i]) {
			std::cout << "No" << std::endl;
			return 0;
		}
	std::cout << "Yes" << std::endl;

	return 0;
}
