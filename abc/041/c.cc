#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a] = i+1;
	}

	for (auto itr = m.rbegin(); itr != m.rend(); itr++)
		std::cout << itr->second << std::endl;

	return 0;
}
