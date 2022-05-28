#include <iostream>
#include <set>

int
main(void)
{
	int q, n, x, c;
	register int i, j;
	std::multiset<int> set;

	std::cin >> q;
	for (i = 0; i < q; i++) {
		std::cin >> n;
		switch (n) {
		case 1:
			std::cin >> x;
			set.insert(x);
			break;
		case 2:
			std::cin >> x >> c;
			for (j = 0; j < c && set.find(x) != set.end(); j++)
				set.erase(set.find(x));
			break;
		case 3:
			auto max = set.end();
			auto min = set.begin();
			std::cout << (*--max - *min) << std::endl;
			break;
		}
	}

	return 0;
}
