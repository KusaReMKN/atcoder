#include <iostream>
#include <string>

int
main(void)
{
	std::string name;
	std::cin >> name;

	std::string eman(name.rbegin(), name.rend());
	std::cout << (name == eman ? "YES" : "NO") << std::endl;

	return 0;
}
