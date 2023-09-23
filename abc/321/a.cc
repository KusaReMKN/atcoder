#include <iostream>
#include <string>

int
main(void)
{
	std::string n;
	std::cin >> n;

	bool is321like = true;
	for (int i = 1; i < n.size(); i++)
		if (n[i-1] <= n[i]) {
			is321like = false;
			break;
		}
	std::cout << (is321like ? "Yes" : "No") << std::endl;

	return 0;
}
