main()
{
	char s[4], t[4];

	scanf("%s%s", s, t);
	if (s[2] - t[0] || s[1] - t[1] || s[0] - t[2])
		puts("NO");
	else
		puts("YES");
}
