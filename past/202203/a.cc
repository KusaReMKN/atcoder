#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;

	std::vector<int> v = {
		a * b,
		a * c,
		b * c,
	};
	std::sort(v.begin(), v.end());
	std::cout << v[0] << " " << v[2] << std::endl;

	return 0;
}
