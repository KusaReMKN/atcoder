#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> v(n);
	for (auto i = 0; i < n; i++) {
		int p;
		std::cin >> p;
		v[p-1] = i;
	}

	int q;
	std::cin >> q;
	for (auto i = 0; i < q; i++) {
		int a, b;
		std::cin >> a >> b;
		std::cout << (v[a-1] < v[b-1] ? a : b) << std::endl;
	}

	return 0;
}
