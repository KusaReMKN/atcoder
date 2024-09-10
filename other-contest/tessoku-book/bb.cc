#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	int q;
	std::cin >> q;

	std::map<std::string, int> m;
	for (int i = 0; i < q; i++) {
		int f, y;
		std::string x;
		std::cin >> f;
		switch (f) {
		case 1:
			std::cin >> x >> y;
			m[x] = y;
			break;
		case 2:
			std::cin >> x;
			std::cout << m[x] << std::endl;
			break;
		}
	}

	return 0;
}
