#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	for (int i = 0; i < s.size(); i++)
		if ('A' <= s[i] && s[i] <= 'Z')
			std::cout << i+1 << std::endl;

	return 0;
}
