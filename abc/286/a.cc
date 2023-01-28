#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int
main(void)
{
	int n, p, q, r, s;
	std::cin >> n >> p >> q >> r >> s;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	for (int i = 0; i < q-p+1; i++)
		std::swap(a[p+i-1], a[r+i-1]);

	std::copy(a.begin(), a.end(),
			std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	return 0;
}
