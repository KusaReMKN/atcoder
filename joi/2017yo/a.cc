#include <iostream>

int
main(void)
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	bool flozen = a <= 0;

	int t = 0;
	while (a < b)
		if (a < 0) {
			t += c, a++;
		} else if (a == 0 && flozen) {
			t += d, flozen = false;
		} else {
			t += e, a++;
		}
	std::cout << t << std::endl;

	return 0;
}
