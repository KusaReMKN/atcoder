#include <iostream>
#include <string>
#include <unordered_map>

int
main(void)
{
	int n;
	std::string s;
	std::unordered_map<std::string, int> m;
	int k;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> s;
		k = m[s]++;
		std::cout << s;
		if (k > 0)
			std::cout << '(' << k << ')';
		std::cout << std::endl;
	}

	return 0;
}
