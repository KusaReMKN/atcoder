#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> a(n);
	std::cin >> a[0];
	for (int i = 1; i < n; i++) {
		std::cin >> a[i];
		a[i] = std::min(a[i-1], a[i-0]);
	}
	std::map<int, int> g;
	for (int i = 0; i < n; i++)
		if (g[-a[i]] == 0)
			g[-a[i]] = i+2;

	for (int i = 0; i < m; i++) {
		int b;
		std::cin >> b;
		std::cout << g.lower_bound(-b)->second-1 << std::endl;
	}

	return 0;
}
