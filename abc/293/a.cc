#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	for (int i = 0; i < s.size()/2; i++) {
		auto t = s[2*i+0];
		s[2*i+0] = s[2*i+1];
		s[2*i+1] = t;
	}
	std::cout << s << std::endl;

	return 0;
}
