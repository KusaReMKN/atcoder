#include <iostream>

int main(void)
{
	unsigned long long n, a, b;
	unsigned long long sum = 0;

	std::cin >> n;
	for (unsigned long long i = 0; i < n; i++) {
		std::cin >> a >> b; a--;
		sum += ((b - a) * (b + a) + b - a) >> 1;
	}
	std::cout << sum << std::endl;

	return 0;
}
