ispalindrome(s)
	char *s;
{
	register i, l;

	l = strlen(s);
	for (i = 0; i < l; i++)
		if (s[i] != s[l-i-1])
			return 0;
	return 1;
}

main()
{
	auto a, b;
	char s[6];
	register i, cnt;

	scanf("%d%d", &a, &b);
	cnt = 0;
	for (i = a; i <= b; i++) {
		sprintf(s, "%d", i);
		if (ispalindrome(s))
			cnt++;
	}
	printf("%d\n", cnt);
}
