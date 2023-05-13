#include <iostream>
#include <set>

int
main(void)
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	for (int i = a; i <= b; i++) {
		bool takahashi = true;
		for (int j = c; j <= d; j++) {
			auto sum = i + j;
			bool isPrime = true;
			for (int k = 2; k*k <= sum; k++)
				if (sum % k == 0) {
					isPrime = false;
					break;
				}
			if (isPrime) {
				takahashi = false;
				break;
			}
		}
aoki:
		if (takahashi) {
			std::cout << "Takahashi" << std::endl;
			return 0;
		}
	}
	std::cout << "Aoki" << std::endl;

	return 0;
}
