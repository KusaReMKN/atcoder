#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int h, w, n;
	std::cin >> h >> w >> n;

	std::string t;
	std::cin >> t;

	std::vector<std::string> s(h);
	for (auto &r: s)
		std::cin >> r;

	int cnt = 0;
	for (auto i = 0; i < h; i++)
		for (auto j = 0; j < w; j++) {
			auto x = j;
			auto y = i;
			for (const auto &c: t) {
				if (s[y][x] == '#')
					goto next;
				switch (c) {
				case 'L':
					x--;
					break;
				case 'R':
					x++;
					break;
				case 'U':
					y--;
					break;
				case 'D':
					y++;
					break;
				}
			}
			if (s[y][x] == '#')
				goto next;
			cnt++;
next:			(void)0;
		}
	std::cout << cnt << std::endl;

	return 0;
}
