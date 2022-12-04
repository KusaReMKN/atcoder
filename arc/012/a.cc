#include <iostream>
#include <string>

int
main(void)
{
	std::string day;
	std::cin >> day;

	int res;
	switch (day[0]) {
	case 'S':
		res = 0;
		break;
	case 'M':
		res = 5;
		break;
	case 'T':
		res = day[1] == 'u' ? 4 : 2;
		break;
	case 'W':
		res = 3;
		break;
	case 'F':
		res = 1;
		break;
	}
	std::cout << res << std::endl;

	return 0;
}
