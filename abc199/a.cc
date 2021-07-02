#include <bits/stdc++.h>

int main(void)
{
	unsigned a, b, c;

	std::cin >> a >> b >> c;
	if (a * a + b * b < c * c)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}
