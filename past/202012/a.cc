#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	if (s.find("ooo") != std::string::npos)
		std::cout << "o";
	else if (s.find("xxx") != std::string::npos)
		std::cout << "x";
	else
		std::cout << "draw";
	std::cout << std::endl;

	return 0;
}
