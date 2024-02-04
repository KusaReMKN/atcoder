#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	auto index = s.find_last_of('.');
	std::cout << s.substr(index+1) << std::endl;

	return 0;
}
