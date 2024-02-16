#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	std::vector s(h, std::string());
	for (auto &r: s)
		std::cin >> r;

	auto z = [](std::vector<std::string> &v, int x, int y) {
		static char t = '#';
		if (y < 0 || y >= v.size() || x < 0 || x >= v[0].size())
			return &t;
		return &v[y][x];
	};

	auto before = s;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) {
			auto q = true;
			for (int k = -1; k <= 1; k++)
				for (int l = -1; l <= 1; l++)
					q &= *z(s, j+k, i+l) == '#';
			before[i][j] = q ? '#' : '.';
		}

	auto after = before;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			if (before[i][j] == '#')
				for (int k = -1; k <= 1; k++)
					for (int l = -1; l <= 1; l++)
						*z(after, j+k, i+l) = '#';
	if (after == s) {
		std::cout << "possible" << std::endl;
		for (const auto &r: before)
			std::cout << r << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}
	for (const auto &r: s)
		std::clog << r << std::endl;
	for (const auto &r: after)
		std::clog << r << std::endl;

	return 0;
}
