#include <iostream>
#include <string>
#include <vector>

	int
main(void)
{
	std::string s;
	std::cin >> s;

	std::vector<int> v;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '(') {
			v.push_back(i);
		} else {
			std::cout << v.back()+1 << ' ' << i+1 << std::endl;
			v.pop_back();
		}

	return 0;
}
