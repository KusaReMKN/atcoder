#include <iostream>
#include <vector>

int
main(void)
{
	int n, q;
	int l;
	std::vector<std::vector<int>> a;
	int s, t;

	std::cin >> n >> q;
	for (int i = 0; i < n; i++) {
		std::vector<int> tmp;

		std::cin >> l;
		for (int j = 0; j < l; j++) {
			int tmp1;

			std::cin >> tmp1;
			tmp.push_back(tmp1);
		}
		a.push_back(tmp);
	}
	for (int i = 0; i < q; i++) {
		std::cin >> s >> t;
		std::cout << a[s-1][t-1] << std::endl;
	}

	return 0;
}
