#include <iostream>
#include <algorithm>

int main(void)
{
	long long a, b, c, d;
	long long ac, bc, ad, db;

	std::cin >> a >> b >> c >> d;
	ac = a * c;
	bc = b * c;
	ad = a * d;
	db = d * b;
	std::cout << std::max({ac, bc, ad, db}) << std::endl;
	return 0;
}
