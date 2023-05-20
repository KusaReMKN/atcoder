#include <iostream>

int
main(void)
{
	long a, b;
	std::cin >> a >> b;

	long cnt = a / b;
	if (a % b)
		cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
