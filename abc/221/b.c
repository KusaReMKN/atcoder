swap(s, n)
	char s[];
{
	int c;

	c = s[n];
	s[n] = s[n+1];
	s[n+1] = c;
}

main()
{
	int i, len;
	char s[101], t[101];

	gets(s);
	gets(t);
	if (strcmp(s, t) == 0)
		return puts("Yes"), 0;
	len = strlen(s);
	for (i = 0; i < len - 1; i++) {
		swap(t, i);
		if (strcmp(s, t) == 0)
			return puts("Yes"), 0;
		swap(t, i);
	}
	puts("No");
}
