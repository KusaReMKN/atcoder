#include <bits/stdc++.h>

int main(void)
{
	std::string a, b;
	std::string aa = "", bb = "";

	std::cin >> a >> b;
	for (int i = 0; i < std::stoi(b); i++)
		aa += a;
	for (int i = 0; i < std::stoi(a); i++)
		bb += b;
	std::cout << (aa < bb ? aa : bb) << std::endl;
	return 0;
}
