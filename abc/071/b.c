main()
{
	char s[100001];
	register c;
	extern char *strchr();

	gets(s);
	for (c = 'a'; c <= 'z'; c++)
		if (strchr(s, c) == 0)
			return printf("%c\n", c), 0;
	puts("None");
}
