#include <iostream>
#include <string>

static int
f(int depth, std::string s)
{
	if (depth == 0) {
		std::cout << s << std::endl;
	} else {
		s.push_back('a');
		f(depth-1, s);
		s.back() = 'b';
		f(depth-1, s);
		s.back() = 'c';
		f(depth-1, s);
		s.pop_back();
	}

	return depth;
}

int
main(void)
{
	int n;
	std::cin >> n;

	f(n, "");

	return 0;
}
