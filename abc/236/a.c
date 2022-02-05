main()
{
	char s[11] = { 0 };
	int a, b, tmp;

	scanf("%s%d%d", s, &a, &b);
	tmp = s[a-1];
	s[a-1] = s[b-1];
	s[b-1] = tmp;
	puts(s);
}
