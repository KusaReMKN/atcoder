#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	std::string t;
	for (const auto &c: s) {
		std::string tmp;
		for (const auto &k: t)
			if (k != c)
				tmp.push_back(k);
		tmp.push_back(c);
		t = tmp;
	}
	std::cout << t << std::endl;

	return 0;
}
