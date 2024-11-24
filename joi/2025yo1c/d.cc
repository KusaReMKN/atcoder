#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	for (int i = 1; i <= n/2; i++) {
		if (n % i != 0)
			continue;

		std::string t = "";
		while (t.size() < s.size())
			t += s.substr(0, i);
		if (t == s) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}
	std::cout << "No" << std::endl;

	return 0;
}
