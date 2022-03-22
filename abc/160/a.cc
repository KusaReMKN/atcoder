#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	char s[7];

	cin >> s;
	if (s[2] == s[3] && s[4] == s[5]) return puts("Yes"), 0;
	return puts("No"), 0;
}
