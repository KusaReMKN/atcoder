main()
{
	int k;
	char s[51];

	scanf("%*d%d%s", &k, s);
	s[k-1] += ('a' - 'A');
	puts(s);
}
