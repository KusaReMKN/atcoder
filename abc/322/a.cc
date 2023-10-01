#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	auto k = s.find("ABC");
	std::cout << (k == std::string::npos ? -1 : (int)k+1) << std::endl;

	return 0;
}
