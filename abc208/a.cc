#include <bits/stdc++.h>

int main(void)
{
	int a, b;

	std::cin >> a >> b;
	if (b < a)
		std::cout << "No" << std::endl;
	else if (b > 6 * a)
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;

	return 0;
}
