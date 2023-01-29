#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		if (s == "For")
			cnt++;
		if (cnt > n/2)
			break;
	}
	std::cout << (cnt > n/2 ? "Yes" : "No") << std::endl;

	return 0;
}
