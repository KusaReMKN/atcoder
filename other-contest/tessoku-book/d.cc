#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	for (int i = 0; i < 10; i++) {
		s = (n & 1 ? "1" : "0") + s;
		n >>= 1;
	}
	std::cout << s << std::endl;

	return 0;
}
