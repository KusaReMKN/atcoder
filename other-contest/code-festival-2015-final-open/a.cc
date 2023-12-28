#include <iostream>
#include <string>

int
main(void)
{
	std::string s, t, u;
	std::cin >> s >> t >> u;

	if (s.size() != 5 || t.size() != 7 || u.size() != 5)
		std::cout << "in";
	std::cout << "valid" << std::endl;

	return 0;
}
