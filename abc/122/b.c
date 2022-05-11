isacgt(s, l)
	char s[];
{
	register i;

	for (i = 0; i < l; i++)
		if (s[i] != 'A' && s[i] != 'C' && s[i] != 'G' && s[i] != 'T')
			return (0);
	return (1);
}

main()
{
	char s[11];
	register i, l, len;

	gets(s);
	len = strlen(s);
	for (l = len; l > 0; l--)
		for (i = 0; i + l <= len; i++)
			if (isacgt(s+i, l))
				goto quit;
quit:
	printf("%d\n", l);
}
