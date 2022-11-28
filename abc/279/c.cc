#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	std::vector<std::string> ss(w);
	for (int i = 0; i < h; i++) {
		std::string s;
		std::cin >> s;
		for (int j = 0; j < w; j++)
			ss[j].push_back(s[j]);
	}
	std::sort(ss.begin(), ss.end());

	std::vector<std::string> tt(w);
	for (int i = 0; i < h; i++) {
		std::string t;
		std::cin >> t;
		for (int j = 0; j < w; j++)
			tt[j].push_back(t[j]);
	}
	std::sort(tt.begin(), tt.end());

	for (int i = 0; i < w; i++)
		if (ss[i] != tt[i]) {
			std::cout << "No" << std::endl;
			return 0;
		}
	std::cout << "Yes" << std::endl;

	return 0;
}
