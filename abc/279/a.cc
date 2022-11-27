#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	int res = 0;
	for (const auto c: s)
		if (c == 'v')
			res++;
		else
			res += 2;
	std::cout << res << std::endl;

	return 0;
}
