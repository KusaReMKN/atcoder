#include <bits/stdc++.h>

int main()
{
	int sum = 0;
	int n;

	for (int i = 0; i < 3; i++) {
		std::cin >> n;
		sum += 7 - n;
	}

	std::cout << sum << std::endl;

	return 0;
}
