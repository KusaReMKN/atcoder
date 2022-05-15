rotate(s)
	char s[];
{
	register i, l, tmp;

	tmp = s[0];
	l = strlen(s);
	for (i = 0; i < l; i++)
		s[i] = s[i+1];
	s[l-1] = tmp;
}

main()
{
	char s[101], t[101], o[101];

	gets(s);
	gets(t);
	strcpy(o, s);
	do {
		rotate(s);
		if (strcmp(s, t) == 0)
			return puts("Yes"), 0;
	} while (strcmp(s, o) != 0);
	puts("No");
}
