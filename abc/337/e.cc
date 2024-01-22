#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	int m;
	for (m = 0; n > 1 << m; m++)
		;
	std::cout << m << std::endl;

	for (int i = 0; i < m; i++) {
		std::vector<int> v;
		for (int j = 0; j < n; j++)
			if (j & 1 << i)
				v.push_back(j+1);
		std::cout << v.size();
		for (const auto &e: v)
			std::cout << " " << e;
		std::cout << std::endl;
	}

	std::string s;
	std::cin >> s;

	int x = 0;
	for (int i = 0; i < m; i++)
		if (s[i] == '1')
			x |= 1 << i;
	std::cout << x+1 << std::endl;

	return 0;
}
