#include <iostream>
#include <string>
#include <utility>
#include <vector>

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	std::vector<std::pair<int, int>> v;
	for (int i = 0; i < h; i++) {
		std::string s;
		std::cin >> s;

		for (int j = 0; j < w; j++)
			if (s[j] == 'T')
				v.push_back({ i+1, j+1 });
	}

	std::cout << v.size() << std::endl;
	for (const auto &e: v)
		std::cout << e.first << ' ' << e.second << std::endl;

	return 0;
}
