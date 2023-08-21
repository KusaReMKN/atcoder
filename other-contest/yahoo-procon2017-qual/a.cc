#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;
	std::sort(s.begin(), s.end());

	std::string t("yahoo");
	std::sort(t.begin(), t.end());

	std::cout << (s == t ? "YES" : "NO") << std::endl;

	return 0;
}
