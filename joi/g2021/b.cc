#include <iostream>
#include <string>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::string t;
	std::cin >> t;

	for (int i = k-1; i < n; i++)
		t[i] ^= 'A' ^ 'a';
	std::cout << t << std::endl;

	return 0;
}
