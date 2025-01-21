#include <iostream>
#include <vector>

int
main(void)
{
	int q;
	std::cin >> q;

	long tail = 0, n = 0;
	std::vector<long> v{ 0 };
	for (int i = 0; i < q; i++) {
		int f;
		std::cin >> f;

		int l, k;
		switch (f) {
		case 1:
			std::cin >> l;
			v.push_back(tail += l);
			break;
		case 2:
			n++;
			break;
		case 3:
			std::cin >> k;
			std::cout << v[n+k-1] - v[n] << std::endl;
			break;
		}
	}

	return 0;
}
