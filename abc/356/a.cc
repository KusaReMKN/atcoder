#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int
main(void)
{
	int n, l, r;
	std::cin >> n >> l >> r;

	std::vector<int> v(n);
	std::iota(v.begin(), v.end(), 1);
	std::reverse(std::next(v.begin(), l-1), std::next(v.begin(), r));
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	return 0;
}
