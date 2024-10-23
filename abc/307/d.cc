#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	std::string v;
	std::vector<int> last;
	for (const auto &c: s)
		if (c == '(') {
			last.push_back(v.size());
			v.push_back(c);
		} else if (c == ')') {
			if (last.size() > 0) {
				while (last.back() != v.size())
					v.pop_back();
				last.pop_back();
			} else {
				v.push_back(c);
			}
		} else {
			v.push_back(c);
		}
	std::cout << v << std::endl;

	return 0;
}
