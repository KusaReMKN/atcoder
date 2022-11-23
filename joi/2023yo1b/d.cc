#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];

	int m;
	std::cin >> m;

	std::set<int> b;
	for (int i = 0; i < m; i++) {
		int bb;
		std::cin >> bb;
		b.insert(bb);
	}

	int s = 0;
	for (int i = 0; i < n; i++) {
		s += a[i];
		if (b.count(s) == 1)
			s = 0;
		std::cerr << a[i] << ":" << s << std::endl;
	}
	std::cout << s << std::endl;

	return 0;
}
