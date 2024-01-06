#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	s.back() = '4';
	std::cout << s << std::endl;

	return 0;
}
