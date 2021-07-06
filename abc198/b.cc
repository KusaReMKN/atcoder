#include <bits/stdc++.h>

int main(void)
{
	std::string n;

	std::cin >> n;
	auto k = n.length();
	for (k--; k > 0 && n[k] == '0'; k--);
	for (int i = 0; i < k; i++, k--)
		if (n[i] != n[k]) {
			std::cout << "No" << std::endl;
			return 0;
		}
	std::cout << "Yes" << std::endl;

	return 0;
}
