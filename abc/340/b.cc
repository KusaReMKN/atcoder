#include <iostream>
#include <vector>

int
main(void)
{
	int q;
	std::cin >> q;

	std::vector<int> a;
	for (int i = 0; i < q; i++) {
		int f, x;
		std::cin >> f >> x;
		switch (f) {
		case 1:
			a.push_back(x);
			break;
		case 2:
			std::cout << a[a.size()-x] << std::endl;
			break;
		}
	}

	return 0;
}
