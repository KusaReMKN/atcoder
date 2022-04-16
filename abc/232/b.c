main()
{
	char s[100001], t[100001];
	int d, i;

	gets(s), gets(t);
#define diff(s, t) \
	((((t)-(s)) + ('z'-'a'+1)) % ('z'-'a'+1))
	d = diff(s[0], t[0]);
	for (i = 1; s[i] != '\0'; i++)
		if (diff(s[i], t[i]) != d)
			break;
	if (s[i] == '\0')
		puts("Yes");
	else
		puts("No");
}
