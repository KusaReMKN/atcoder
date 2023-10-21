#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

#include <atcoder/all>

static inline void
remove(std::vector<std::string> &s, int x, int y)
{
	s[y][x] = '.';
	for (int i = -1; i <= 1; i++)
		for (int j = -1; j <= 1; j++) {
			if (x+i < 0 || x+i >= s[0].size() || y+j < 0 || y+j >= s.size())
				continue;
			if (s[y+j][x+i] == '#')
				remove(s, x+i, y+j);
		}
}

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	std::vector<std::string> s(h);
	for (auto &r: s)
		std::cin >> r;

	int cnt = 0;
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			if (s[j][i] == '#') {
				cnt++;
				remove(s, i, j);
			}
	std::cout << cnt << std::endl;

	return 0;
}
