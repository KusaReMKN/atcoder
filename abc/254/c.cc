#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<std::vector<int>> aa(k);
	for (int i = 0; i < n; i += k)
		for (int j = 0; j < k && i+j < n; j++) {
			int a;
			std::cin >> a;
			aa[j].push_back(a);
		}
	for (int i = 0; i < k; i++)
		std::sort(aa[i].begin(), aa[i].end());

	int last = 0;
	for (int i = 0; i < n; i += k)
		for (int j = 0; j < k && i+j < n; j++)
			if (last > aa[j][i/k]) {
				std::cout << "No" << std::endl;
				return 0;
			} else {
				last = aa[j][i/k];
			}
	std::cout << "Yes" << std::endl;

	return 0;
}
