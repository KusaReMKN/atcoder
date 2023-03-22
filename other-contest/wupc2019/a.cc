#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	auto pos = s.find("WA");
	while (pos != std::string::npos) {
		s[pos+0] = 'A';
		s[pos+1] = 'C';
		pos = s.find("WA", std::max(0, (int)pos-1));
	}
	std::cout << s << std::endl;

	return 0;
}
