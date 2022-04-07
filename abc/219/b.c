main()
{
	char s[3][11];
	int c;

	gets(s[0]);
	gets(s[1]);
	gets(s[2]);
	while ((c = getchar()) != '\n')
		printf("%s", s[c - '1']);
	putchar('\n');
}
