#include <bits/stdc++.h>

int main(void)
{
	int a, b;

	std::cin >> a >> b;
	if (a > b)
		std::cout << 0 << std::endl;
	else
		std::cout << (b - a + 1) << std::endl;

	return 0;
}
