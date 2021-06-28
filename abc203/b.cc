#include <bits/stdc++.h>

int main()
{
	int n, k;
	int sum = 0;

	std::cin >> n >> k;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= k; j++)
			sum += std::stoi(std::to_string(i) + "0" + std::to_string(j));
	std::cout << sum << std::endl;

	return 0;
}
