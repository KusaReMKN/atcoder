#include <bits/stdc++.h>

unsigned long long fact(unsigned long long x)
{
	if (x < 2) return 0;
	unsigned long long ret = 1;
	ret = x * (x - 1) / 2;
	return ret;
}

int main()
{
	int n;
	int buf[200] = { 0 };
	unsigned long long res = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		std::cin >> tmp;
		buf[tmp % 200]++;
	}
	for (int i = 0; i < 200; i++)
		res += fact(buf[i]);
	std::cout << res << std::endl;

	return 0;
}
