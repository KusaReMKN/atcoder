#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::vector<int>> a(n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++) {
			int tmp;
			std::cin >> tmp;
			a[i].push_back(tmp);
		}

	int curr = 1;
	for (int i = 1; i <= n; i++) {
		int min = std::min(curr, i);
		int max = std::max(curr, i);
		curr = a[max-1][min-1];
	}
	std::cout << curr << std::endl;

	return 0;
}
