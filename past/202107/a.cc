#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	int sum = 0;
	for (int i = 0; i < 14; i += 2)
		sum += s[i] - '0';
	sum *= 3;
	for (int i = 1; i < 14; i += 2)
		sum += s[i] - '0';
	sum %= 10;
	std::cout << (sum == s[14]-'0' ? "Yes" : "No") << std::endl;

	return 0;
}
