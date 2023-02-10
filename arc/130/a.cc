#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	std::vector<long> v(n+1, 0L);
	for (int j = 1; j < n; j++)
		if (s[j-1] != s[j])
			v[j] = 0L;
		else
			v[j] = v[j-1] + 1L;
	std::cout << std::reduce(v.begin(), v.end(), 0L) << std::endl;

	return 0;
}
