#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	auto n = s.size();
	std::string r(s.rbegin(), s.rend());
	bool yes = true;
	for (int i = 0; i < n; i++)
		if (s[i] != r[i] && s[i] != '*' && r[i] != '*') {
			yes = false;
			break;
		}
	std::cout << (yes ? "YES" : "NO") << std::endl;

	return 0;
}
