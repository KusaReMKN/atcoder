main()
{
	int n;
	char s[8];

	scanf("%d%s", &n, s);
	puts(s[n-1] == 'o' ? "Yes" : "No");
}
