#include <bits/stdc++.h>

int main(void)
{
	int x, y;

	std::cin >> x >> y;
	if (x == y) {
		std::cout << x << std::endl;
	} else {
		switch (x + y) {
		case 1:
			std::cout << 2 << std::endl;
			break;
		case 2:
			std::cout << 1 << std::endl;
			break;
		case 3:
			std::cout << 0 << std::endl;
			break;
		}
	}
	return 0;
}
