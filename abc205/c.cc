#include <bits/stdc++.h>

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;
	if (a < 0 && !(c & 1))
		a = -a;
	if (b < 0 && !(c & 1))
		b = -b;
	if (a < b)
		std::cout << "<" << std::endl;
	if (a == b)
		std::cout << "=" << std::endl;
	if (a > b)
		std::cout << ">" << std::endl;

	return 0;
}
