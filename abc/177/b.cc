#include <bits/stdc++.h>

int main(void)
{
	std::string s, t;
	int mindiff = 99999;

	std::cin >> s >> t;
	for (int i = 0; i < s.length() - t.length() + 1; i++) {
		int diff = 0;
		for (int j = 0; j < t.length(); j++) {
			if (s[i+j] != t[j]) diff++;
		}
		if (mindiff > diff) mindiff = diff;
	}

	std::cout << mindiff << std::endl;

	return 0;
}
