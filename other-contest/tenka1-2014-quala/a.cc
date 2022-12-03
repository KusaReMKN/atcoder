#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	std::vector<std::string> v(1000);

	for (int i = 1; i <= 1000; i++)
		v[i-1] = std::to_string(i);
	std::sort(v.begin(), v.end());
	for (const auto &e: v)
		std::cout << e << std::endl;

	return 0;
}
