#include <iostream>
#include <string>

int
main(void)
{
	std::string a, b;

	std::cin >> a >> b;
	std::cout << a.size() * b.size() << std::endl;

	return 0;
}
