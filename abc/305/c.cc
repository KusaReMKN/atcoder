#include <algorithm>
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

	int top = h, bottom = 0, left = w, right = 0;
	for (int i = 0; i < h; i++) {
		int l = s[i].find_first_of('#');
		int r = s[i].find_last_of('#');
		if (l == std::string::npos)
			continue;
		top = std::min(top, i);
		bottom = std::max(bottom, i);
		left = std::min(left, l);
		right = std::max(right, r);
	}
	std::clog << top << ',' << left << ';'
		<< bottom << ',' << right << std::endl;

	int x = -1, y = -1;
	for (int i = top; i <= bottom; i++) {
		int l = s[i].find('.', left);
		if (l != std::string::npos && l <= right) {
			y = i, x = l;
			break;
		}
	}
	std::cout << y+1 << " " << x+1 << std::endl;

	return 0;
}
