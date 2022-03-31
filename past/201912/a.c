main()
{
	int n;
	char *e, s[4];

	gets(s);
	n = strtol(s, &e, 10);
	if (*e != '\0')
		puts("error");
	else
		printf("%d\n", n + n);
}
