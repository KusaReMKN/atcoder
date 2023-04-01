#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int last = s[0];
	for (int i = 1; i < s.size(); i++) {
		if (last == s[i]) {
			std::cout << "No" << std::endl;
			return 0;
		}
		last = s[i];
	}
	std::cout << "Yes" << std::endl;

	return 0;
}
