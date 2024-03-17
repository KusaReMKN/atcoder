#include <iostream>
#include <string>

int
main(void)
{
	std::string x;
	std::cin >> x;

	auto c = x.back();
	x.pop_back();
	if (x.size() == 0)
		x = "0";
	if (x.size() == 1 && x[0] == '-')
		x = "-0";

	auto xx = std::stol(x);
	if (c != '0' && x[0] != '-')
		xx++;
	std::cout << xx << std::endl;

	return 0;
}
