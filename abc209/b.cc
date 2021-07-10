#include <bits/stdc++.h>

int main(void)
{
	int n, x;
	int sum = 0;

	std::cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		if (i & 1)
			sum += temp - 1;
		else
			sum += temp;
		if (sum > x) {
			std::cout << "No" << std::endl;
			return 0;
		}
	}

	std::cout << "Yes" << std::endl;

	return 0;
}
