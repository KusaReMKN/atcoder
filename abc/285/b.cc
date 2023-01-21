#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::string s;

	std::cin >> n >> s;
	for (int i = 1; i < n; i++) {
		int l;
		for (l = 0; l+i < n; l++) {
			if (s[l] == s[l+i])
				break;
		}
		std::cout << l << std::endl;
	}

	return 0;
}
