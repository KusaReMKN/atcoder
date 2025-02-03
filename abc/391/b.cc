#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::string> s(n);
	for (auto &r: s)
		std::cin >> r;

	std::vector<std::string> t(m);
	for (auto &r: t)
		std::cin >> r;

	for (int i = 0; i < n-m+1; i++)
		for (int j = 0; j < n-m+1; j++) {
			auto yes = true;
			for (int k = 0; k < m; k++)
				if (s[i+k].substr(j, m) != t[k]) {
					yes = false;
					break;
				}
			if (yes) {
				std::cout << i+1 << ' ' << j+1 << std::endl;
				return 0;
			}
		}

	return -1;
}
