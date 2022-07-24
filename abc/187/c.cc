#include <iostream>
#include <string>
#include <unordered_map>

int
main(void)
{
	int n;
	std::string s;
	std::unordered_map<std::string, int> m;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> s;
		if (s[0] == '!') {
			if (m[s.substr(1)] == 1) {
				std::cout << s.substr(1) << std::endl;
				return 0;
			}
			m[s.substr(1)] = -1;
		} else {
			if (m[s] == -1) {
				std::cout << s << std::endl;
				return 0;
			}
			m[s] = 1;
		}
	}
	std::cout << "satisfiable" << std::endl;

	return 0;
}
