#include <iostream>
#include <string>

int
main(void)
{
	std::string a;
	std::cin >> a;

	int b;
	std::cin >> b;
	b--;
	b %= a.size();
	std::cout << a[b] << std::endl;

	return 0;
}
