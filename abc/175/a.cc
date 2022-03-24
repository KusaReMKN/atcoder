#include <bits/stdc++.h>

int main(void)
{
	int r = 0;
	std::string s;

	std::cin >> s;
	if (s == "RRR")
		return std::cout << "3\n", 0;
	if (s == "RRS" || s == "SRR")
		return std::cout << "2\n", 0;
	if (s == "RSS" || s == "RSR" || s == "SRS" || s == "SSR")
		return std::cout << "1\n", 0;
	return std::cout << "0\n", 0;
}
