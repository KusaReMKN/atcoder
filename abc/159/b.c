main()
{
	int i, n, m;
	char s[100], tmp[100];

	gets(s);
	n = strlen(s);
	for (i = 0; i < n && i <= n-i-1; i++)
		if (s[i] != s[n-i-1])
			return puts("No"), 0;
	strcpy(tmp, s);
	tmp[(n-1)/2] = 0;
	m = strlen(tmp);
	for (i = 0; i < m && i <= m-i-1; i++)
		if (s[i] != s[m-i-1])
			return puts("No"), 0;
	strcpy(tmp, s + (n+3)/2-1);
	m = strlen(tmp);
	for (i = 0; i < m && i <= m-i-1; i++)
		if (s[i] != s[m-i-1])
			return puts("No"), 0;
	puts("Yes");
}
