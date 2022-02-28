#include <iostream>
#include <map>

int
main(void)
{
	int n, m, tmp;
	std::map<int, int> mp;

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		std::cin >> tmp;
		mp[tmp]++;
	}
	for (int i = 0; i < m; i++) {
		std::cin >> tmp;
		mp[tmp]--;
		if (mp[tmp] < 0) {
			std::cout << "No" << std::endl;
			return 0;
		}
	}
	std::cout << "Yes" << std::endl;

	return 0;
}
