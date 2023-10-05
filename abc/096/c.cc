#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	std::vector<std::string> s(h);
	for (auto &r: s)
		std::cin >> r;

	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			if (s[i][j] == '#') {
				int k = '.';
				if (i > 0)
					k &= s[i-1][j];
				if (i < h-1)
					k &= s[i+1][j];
				if (j > 0)
					k &= s[i][j-1];
				if (j < w-1)
					k &= s[i][j+1];
				if (k == '.') {
					std::cout << "No" << std::endl;
					return 0;
				}
			}
	std::cout << "Yes" << std::endl;

	return 0;
}
