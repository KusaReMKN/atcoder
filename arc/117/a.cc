#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int a, b;
	std::cin >> a >> b;

	std::vector<int> aa(a);
	for (int i = 0; i < a; i++)
		aa[i] = i+1;

	std::vector<int> bb(b);
	for (int i = 0; i < b; i++)
		bb[i] = -i-1;

	if (a < b)
		aa.back() += b*(b+1)/2 - a*(a+1)/2;
	if (a > b)
		bb.back() -= a*(a+1)/2 - b*(b+1)/2;

	for (const auto &e: aa)
		std::cout << e << " ";
	for (const auto &e: bb)
		std::cout << e << (e != bb.back() ? " " : "");
	std::cout << std::endl;

	return 0;
}
