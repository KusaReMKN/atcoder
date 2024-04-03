#include <iostream>
#include <string>

int
main(void)
{
	long a, b, n;
	std::cin >> a >> b >> n;

	std::string x;
	std::cin >> x;

	for (const auto &c: x)
		switch (c) {
		case 'S':
			if (a > 0)
				a--;
			break;
		case 'C':
			if (b > 0)
				b--;
			break;
		case 'E':
			if (a < b)
				b--;
			else if (a > 0)
				a--;
			break;
		}
	std::cout << a << std::endl << b << std::endl;

	return 0;
}
