#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	for (auto const &c: s)
		std::cout << (char)(c ^ 'A' ^ 'a');
	std::cout << std::endl;

	return 0;
}
