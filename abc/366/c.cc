#include <iostream>
#include <map>

int
main(void)
{
	int q;
	std::cin >> q;

	std::map<int, int> m;
	for (int i = 0; i < q; i++) {
		int f, x;
		std::cin >> f;
		switch (f) {
		case 1:
			std::cin >> x;
			m[x]++;
			break;
		case 2:
			std::cin >> x;
			if (--m[x] == 0)
				m.erase(x);
			break;
		case 3:
			std::cout << m.size() << std::endl;
			break;
		}
	}

	return 0;
}
