#include <iostream>
#include <string>
#include <regex>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	std::regex ptn("(axa|ixi|uxu|exe|oxo)");
	std::string t;
	do
		t = std::regex_replace(s, ptn, "...");
	while (t != s && (s = t, true));

	std::cout << s << std::endl;

	return 0;
}
