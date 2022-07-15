#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	int max = 0;
	std::map<std::string, int> mp;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		mp[s]++;
		if (max < mp[s])
			max = mp[s];
	}
	for (auto itr = mp.begin(); itr != mp.end(); itr++)
		if (itr->second == max)
			std::cout << itr->first << std::endl;

	return 0;
}
