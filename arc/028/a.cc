#include <iostream>

int
main(void)
{
	int n, a, b;
	char *winner;

	std::cin >> n >> a >> b;
	while (1) {
		if ((n -= a) <= 0) {
			winner = "Ant";
			break;
		}
		if ((n -= b) <= 0) {
			winner = "Bug";
			break;
		}
	}
	std::cout << winner << std::endl;

	return 0;
}
