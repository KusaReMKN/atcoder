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
		if (s == "Takahashi")
			cnt++;
	}
	std::cout << cnt << std::endl;

	return 0;
}
