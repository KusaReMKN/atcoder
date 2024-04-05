#include <iostream>
#include <vector>

#define MOD	1000000007L

int
main(void)
{
	long n;
	std::cin >> n;

	std::vector<long> s(n+1);
	s[0] = 0;
	for (int i = 1; i <= n; i++) {
		std::cin >> s[i];
		s[i] += s[i-1];
		s[i] %= MOD;
	}

	long sum = 0;
	for (int i = 1; i <= n; i++) {
		long ai = (s[i] - s[i-1] + MOD) % MOD;
		long saj = (s[n] - s[i] + MOD) % MOD;
		sum += ai * saj % MOD;
		sum %= MOD;
	}
	std::cout << sum << std::endl;

	return 0;
}
