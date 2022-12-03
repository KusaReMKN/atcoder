#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	int s0, s1;

	std::cin >> n;
	std::cin >> s0;
	std::cout << s0;
	for (int i = 1; i < n; i++) {
		std::cin >> s1;
		std::cout << (i == 0 ? "" : " ") << (s1 - s0);
		s0 = s1;
	}
	std::cout << std::endl;

	return 0;
}
