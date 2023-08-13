#include <iostream>
#include <string>

const std::string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int
main(void)
{
	int n;
	std::cin >> n;

	n += 2;
	std::cout << pi.substr(0, n) << std::endl;

	return 0;
}
