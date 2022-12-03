#include <iostream>

int
main(void)
{
	int h1, m1, h2, m2, k;

	std::cin >> h1 >> m1 >> h2 >> m2 >> k;
	h2 -= h1;
	m2 -= m1;
	if (m2 < 0)
		m2 += 60, h2--;
	h2 *= 60;
	m2 += h2;
	m2 -= k;
	std::cout << m2 << std::endl;

	return 0;
}
