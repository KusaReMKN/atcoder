main()
{
	auto n;
	char s[51][51];
	register i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", s[i]);
	for (i = 0; i < n; i++) {
		for (j = n-1; j >= 0; j--)
			putchar(s[j][i]);
		putchar('\n');
	}
}
