#include <iostream>
#include <string>

int
main(void)
{
	std::string s, t;
	std::cin >> s >> t;

	for (auto w = 0; w < s.size(); w++)
		for (auto c = 0; c < w; c++) {
			std::string u;
			for (auto i = c; i < s.size(); i += w)
				u.push_back(s[i]);
			if (t == u) {
				std::cout << "Yes" << std::endl;
				return 0;
			}
		}
	std::cout << "No" << std::endl;

	return 0;
}
