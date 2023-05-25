#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	int sum = 0;

	std::string s, s0;
	std::cin >> s0;
	for (const auto &c: s0)
		if (c == 'x' || c == 'o')
			sum++;
	for (int i = 1; i < n; i++) {
		std::cin >> s;
		for (int j = 0; j < 9; j++)
			if (s[j] == 'x')
				sum++;
			else if (s[j] == 'o' && s0[j] != 'o')
				sum++;
		s0 = s;
	}
	std::cout << sum << std::endl;

	return 0;
}
