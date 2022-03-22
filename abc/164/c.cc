#include <bits/stdc++.h>

int main(void)
{
	int n;
	std::map<std::string, bool> got;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		got[s] = true;
	}

	std::cout << got.size() << std::endl;

	return 0;
}
