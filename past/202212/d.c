#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::string s;
	std::cin >> s;

	int ya = 0;
	std::vector<int> te(n);
	for (int i = 0; i < s.size(); i++) {
		te[i%n]++;
		switch (s[i]) {
		case '+':
			te[i%n] += ya;
			ya = 0;
			break;
		case '-':
			ya += te[i%n];
			te[i%n] = 0;
			break;
		}
	}
	for (auto e: te)
		std::cout << e << std::endl;

	return 0;
}
