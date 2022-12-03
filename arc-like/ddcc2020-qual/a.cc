#include <iostream>

int
main(void)
{
	int x, y;
	int res;

	std::cin >> x >> y;
	res = 0;
	switch (x) {
	case 1:
		res += 100000;
	case 2:
		res += 100000;
	case 3:
		res += 100000;
	}
	switch (y) {
	case 1:
		res += 100000;
	case 2:
		res += 100000;
	case 3:
		res += 100000;
	}
	if (x == 1 && y == 1)
		res += 400000;
	std::cout << res << std::endl;

	return 0;
}
