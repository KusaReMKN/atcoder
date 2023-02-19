#include <iostream>
#include <string>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::string s;
	std::cin >> s;

	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (cnt < k && s[i] == 'o')
			cnt++;
		else
			s[i] = 'x';
	std::cout << s << std::endl;

	return 0;
}
