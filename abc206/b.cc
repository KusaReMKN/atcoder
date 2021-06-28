#include <bits/stdc++.h>

int main(void)
{
	int i;
	unsigned long long n;
	unsigned long long sum = 0;

	std::cin >> n;
	for (i = 1; sum < n; i++)
		sum += i;
	std::cout << (i - 1) << std::endl;

	return 0;
}
