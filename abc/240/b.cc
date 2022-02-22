#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::map<int, int> mp;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		std::cin >> tmp;
		mp[tmp]++;
	}

	std::cout << mp.size() << std::endl;
}
