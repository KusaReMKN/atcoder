#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	for (int i = 0; i <= s.size(); i++) {
		if (i == a || i == b || i == c || i == d)
			std::cout << '"';
		if (i < s.size())
			std::cout << s[i];
	}
	std::cout << std::endl;

	return 0;
}
