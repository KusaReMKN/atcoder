#include <bits/stdc++.h>

int main(void)
{
	std::array<int, 3> v;

	for (int i = 0; i < 3; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end());
	std::cout << (v[1] +v[2]) << std::endl;

	return 0;
}
