#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> v(n, 0);
	for (int i = 0; i < n; i++) {
		int Id;
		std::cin >> Id;
		Id--;
		switch (i) {
		case 0:
			v[Id] = 100000;
			break;
		case 1:
			v[Id] = 50000;
			break;
		case 2:
			v[Id] = 30000;
			break;
		case 3:
			v[Id] = 20000;
			break;
		case 4:
			v[Id] = 10000;
			break;
		default:
			goto quit;
		}
	}
quit:
	for (const auto &e: v)
		std::cout << e << std::endl;

	return 0;
}
