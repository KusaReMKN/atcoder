main()
{
	char s[101];
	register i, x, max;

	scanf("%*d%s", s);
	x = max = 0;
	for (i = 0; s[i]; i++) {
		if (s[i] == 'I')
			x++;
		else
			x--;
		if (max < x)
			max = x;
	}
	printf("%d\n", max);
}
