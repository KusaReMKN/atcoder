#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	std::map<char, char> m;
	for (const auto &c: s)
		m[c] = c;

	int q;
	std::cin >> q;

	for (int i = 0; i < q; i++) {
		char c, d;
		std::cin >> c >> d;
		for (auto &e: m)
			if (e.second == c)
				e.second = d;
	}

	for (const char &c: s)
		std::cout << m[c];
	std::cout << std::endl;

	return 0;
}
