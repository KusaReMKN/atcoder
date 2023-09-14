#include <iostream>
#include <string>

int
main(void)
{
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;

		std::string s;
		std::cin >> s;

		bool ok = false;
		for (int j = 1; j < n; j++)
			if (s.substr(0, j) < s.substr(j, n-j)) {
				ok = true;
				break;
			}
		std::cout << (ok ? "Yes" : "No") << std::endl;
	}

	return 0;
}
