#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string o("indeednow");
	std::sort(o.begin(), o.end());
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		std::sort(s.begin(), s.end());
		std::cout << (s == o ? "YES" : "NO") << std::endl;
	}

	return 0;
}
