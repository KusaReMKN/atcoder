#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	int n = 0;
	for (int i = 0; i < s.size(); i++)
		n |= (s[s.size()-i-1] == '1') << i;
	std::cout << n << std::endl;

	return 0;
}
