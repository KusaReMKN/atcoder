#include <bits/stdc++.h>

int main()
{
	std::string s, t = "";
	std::string table[] = { "0", "1", "", "", "", "", "9", "", "8", "6", };

	std::cin >> s;

	for (int i = s.length() - 1; i >= 0; i--)
		t += table[s[i] - '0'];

	std::cout << t << std::endl;

	return 0;
}
