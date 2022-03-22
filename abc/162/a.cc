#include <bits/stdc++.h>

int main(void)
{
	std::string n;

	std::cin >> n;
	if (strchr(n.c_str(), '7')) return std::cout << "Yes\n", 0;
	return std::cout << "No\n", 0;
}
