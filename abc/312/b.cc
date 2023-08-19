#include <iostream>
#include <regex>
#include <string>
#include <vector>

#define PATTERN \
	"###x.....###x.....###x.....xxxx...................xxxx.....x###.....x###.....x###"


static inline bool
isTaK(std::vector<std::string> &t)
{
	std::string p;
	for (const auto &r: t)
		p += r;
	std::replace(p.begin(), p.end(), '.', 'x');
	return std::regex_match(p.begin(), p.end(), std::regex(PATTERN));
}

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::string> s(n);
	for (auto &e: s)
		std::cin >> e;

	for (int j = 0; j < n-9+1; j++)
		for (int i = 0; i < m-9+1; i++) {
			std::vector<std::string> t(9);
			for (int k = 0; k < 9; k++)
				t[k] = s[j+k].substr(i, 9);
			if (isTaK(t))
				std::cout << j+1 << " " << i+1 << std::endl;
		}

	return 0;
}
