#include <iostream>
#include <string>

int
main(void)
{
	std::string s, t;
	std::cin >> s >> t;

	std::cout << (s == "AtCoder" && t == "Land" ? "Yes" : "No")
			<< std::endl;

	return 0;
}
