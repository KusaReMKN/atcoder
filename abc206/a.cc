#include <bits/stdc++.h>

int main()
{
	int n;

	std::cin >> n;
	n *= 1.08;

	if (n < 206)
		std::cout << "Yay!" << std::endl;
	else if (n == 206)
		std::cout << "so-so" << std::endl;
	else
		std::cout << ":(" << std::endl;

	return 0;
}
