#include <iostream>
#include <vector>

int
main(void)
{
	std::vector<int> v;
	do {
		int a;
		std::cin >> a;
		v.push_back(a);
	} while (v.back() != 0);

	for (auto itr = v.rbegin(); itr != v.rend(); itr++)
		std::cout << *itr << std::endl;

	return 0;
}
