main()
{
	char s[4];
	register l;

	gets(s);
	l = strlen(s);
	if (l == 3)
		printf("%s%s\n", s, s);
	if (l == 2)
		printf("%s%s%s\n", s, s, s);
	if (l == 1)
		printf("%s%s%s%s%s%s\n", s, s, s, s, s, s);
}
