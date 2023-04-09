#include <iostream>

int
main(void)
{
	long a, b;
	std::cin >> a >> b;

	long cnt = 0;
	while (a != b) {
		std::clog << a << " " << b << std::endl;
		if (a > b) {
			if (a % b == 0) {
				cnt += a / b - 1;
				break;
			}
			cnt += a / b;
			a %= b;
		}
		if (b > a) {
			if (b % a == 0) {
				cnt += b / a - 1;
				break;
			}
			cnt += b / a;
			b %= a;
		}
	}
	std::cout << cnt << std::endl;

	return 0;
}
