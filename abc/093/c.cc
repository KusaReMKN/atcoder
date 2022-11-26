#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	std::vector<int> v(3);

	for (int i = 0; i < 3; i++)
		std::cin >> v[i];
	int ope = 0;
	while (v[0] != v[1] || v[1] != v[2]) {
		ope++;
		std::sort(v.begin(), v.end(), std::greater<>());
		if (v[0] == v[1])
			v[2] += 2;
		else
			v[1]++, v[2]++;
	}
	std::cout << ope << std::endl;

	return 0;
}
