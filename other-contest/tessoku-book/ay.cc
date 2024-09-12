#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int q;
	std::cin >> q;

	std::vector<std::string> v;
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
			std::cout << v.back() << std::endl;
			break;
		case 3:
			v.pop_back();
			break;
		}
	}

	return 0;
}
