#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<long> s(n+1, 0);
	for (int i = 1; i <= n; i++) {
		std::cin >> s[i];
		s[i] += s[i-1];
	}

	long sum = 0;
	for (int i = 0; i < n-k+1; i++)
		sum += s[i+k] - s[i];
	std::cout << sum << std::endl;

	return 0;
}
