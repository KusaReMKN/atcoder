#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	int last = 0;
	int edge = 0;
	for (auto &e: a) {
		std::cin >> e;
		if (edge == 0 && last <= e)
			last = e;
		else
			edge = last;
	}
	if (edge == 0)
		edge = a.back();

	for (const auto &e: a)
		if (e != edge)
			std::cout << e << " ";
	std::cout << std::endl;

	return 0;
}
