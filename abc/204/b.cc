#include <bits/stdc++.h>

int main()
{
	int n;
	int sum = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		std::cin >> tmp;
		if (tmp > 10)
			sum += tmp - 10;
	}
	std::cout << sum << std::endl;

	return 0;
}
