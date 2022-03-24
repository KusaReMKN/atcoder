#include <bits/stdc++.h>

int main(void)
{
	std::string s, t;

	std::cin >> s >> t;

	int diff = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != t[i]) diff++;
	}

	std::cout << diff << std::endl;

	return 0;
}
