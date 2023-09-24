#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	int n, a, b;
	std::cin >> n >> a >> b;

	std::string s;
	std::cin >> s;

	std::reverse(s.begin() + a-1, s.begin() + b);
	std::cout << s << std::endl;

	return 0;
}
