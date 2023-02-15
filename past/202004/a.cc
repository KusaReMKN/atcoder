#include <cstdlib>
#include <iostream>
#include <string>

int
main(void)
{
	std::string s, t;
	std::cin >> s >> t;

	int a;
	if (s[0] == 'B')
		a = -(s[1] - '1');
	else
		a = s[0] - '0';

	int b;
	if (t[0] == 'B')
		b = -(t[1] - '1');
	else
		b = t[0] - '0';

	std::cout << std::abs(a-b) << std::endl;

	return 0;
}
