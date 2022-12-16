#include <iostream>
#include <set>
#include <string>
#include <vector>

static inline int
f(std::vector<std::string> &c, int i, int j, int h, int w)
{
	int tab[] = { -1, 0, +1 };

	std::set<int> s;
	for (auto &di: tab)
		if (0 <= i+di && i+di < h)
			for (auto &dj: tab)
				if (0 <= j+dj && j+dj < w)
					if (c[i+di][j+dj] != '.' && di+dj & 1)
						s.insert(c[i+di][j+dj] - '0');
	for (int k = 1; k <= 5; k++)
		if (s.count(k) == 0)
			return k + '0';

	return '?';
}

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	std::vector<std::string> c(h);
	for (auto &r: c)
		std::cin >> r;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
			if (c[i][j] != '.')
				std::cout << c[i][j];
			else
				std::cout << (c[i][j] = f(c, i, j, h, w));
		std::cout << std::endl;
	}

	return 0;
}
