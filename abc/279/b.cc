#include <iostream>
#include <string>

int
main(void)
{
	std::string s, t;

	std::cin >> s >> t;
	std::cout
		<< (s.find(t) == std::string::npos ? "No" : "Yes")
		<< std::endl;

	return 0;
}
