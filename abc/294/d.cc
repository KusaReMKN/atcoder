#include <iostream>
#include <set>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	int cnt = 1;
	std::set<int> called;

	for (int i = 0; i < q; i++) {
		int e, x;
		std::cin >> e;
		switch (e) {
		case 1:
			called.insert(cnt++);
			break;
		case 2:
			std::cin >> x;
			called.erase(x);
			break;
		case 3:
			std::cout << *called.begin() << std::endl;
			break;
		}
	}

	return 0;
}
