#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	string n;
	int k = 0;

	cin >> n;
	for (int i = 0; i < n.length(); i++) k += (n[i] - '0');
	if (k % 9) return puts("No"), 0;
	return puts("Yes"), 0;
}
