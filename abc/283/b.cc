#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> aa(n);
	for (auto &a: aa)
		std::cin >> a;

	int q;
	std::cin >> q;
	for (int i = 0; i < q; i++) {
		int f, k, x;
		std::cin >> f;
		switch (f) {
		case 1:
			std::cin >> k >> x;
			aa[k-1] = x;
			break;
		case 2:
			std::cin >> k;
			std::cout << aa[k-1] << std::endl;
			break;
		}
	}

	return 0;
}
