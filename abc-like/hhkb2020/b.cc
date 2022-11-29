#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	int cnt = 0;
	std::vector<std::string> ss(w);
	for (int i = 0; i < h; i++) {
		std::string s;
		std::cin >> s;
		for (int j = 0; j < w; j++)
			ss[j] += s[j];
		size_t p = 0;
		while ((p = s.find("..", p)) != -1)
			cnt++, p++;
	}
	for (const auto &s: ss) {
		size_t p = 0;
		while ((p = s.find("..", p)) != -1)
			cnt++, p++;
	}
	std::cout << cnt << std::endl;

	return 0;
}
