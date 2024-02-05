#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	if (s.front() != s.back()) {
		std::cout << 1 << std::endl;
		return 0;
	}
	for (int i = 1; i < s.size()-1; i++)
		if (s.front() != s[i] && s[i+1] != s.back()) {
			std::cout << 2 << std::endl;
			return 0;
		}
	std::cout << -1 << std::endl;

	return 0;
}
