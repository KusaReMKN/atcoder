#include <bits/stdc++.h>

int main()
{
	std::array<int, 3> a;

	for (int i = 0; i < 3; i++)
		std::cin >> a[i];

	std::sort(a.begin(), a.end());

	if (a[2] - a[1] == a[1] - a[0])
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}
