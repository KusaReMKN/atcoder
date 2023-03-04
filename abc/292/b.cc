#include <iostream>
#include <vector>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	std::vector<int> v(n+1);
	for (int i = 0; i < q; i++) {
		int t, x;
		std::cin >> t >> x;

		switch (t) {
		case 3:
			std::cout << (v[x] >= 2 ? "Yes" : "No") << std::endl;
			break;
		case 2:
			v[x]++;
			/* FALLTHROUGH */
		case 1:
			v[x]++;
			break;
		}
	}

	return 0;
}
