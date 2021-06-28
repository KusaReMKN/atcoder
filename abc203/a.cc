#include <bits/stdc++.h>

int main(void)
{
	std::array<int, 3> v;

	for (int i = 0; i < 3; i++)
		std::cin >> v[i];

	std::sort(v.begin(), v.end());

	if (v[0] == v[1])
		std::cout << v[2] << std::endl;
	else if (v[1] == v[2])
		std::cout << v[0] << std::endl;
	else
		std::cout << 0 << std::endl;

	return 0;
}
