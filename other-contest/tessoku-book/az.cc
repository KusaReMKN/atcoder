#include <deque>
#include <iostream>

int
main(void)
{
	int q;
	std::cin >> q;

	std::deque<std::string> v;
	for (int i = 0; i < q; i++) {
		int f;
		std::string s;
		std::cin >> f;
		switch (f) {
		case 1:
			std::cin >> s;
			v.push_back(s);
			break;
		case 2:
			std::cout << v[0] << std::endl;
			break;
		case 3:
			v.pop_front();
			break;
		}
	}

	return 0;
}
