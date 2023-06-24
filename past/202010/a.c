parse(s)
	char s[];
{
	register k;
	register char *p;

	for (k = 0, p = s; *p != '\0'; p++, k *= 10)
		k += *p - '0';

	return (k / 10);
}

main()
{
	char buf[512];
	register a, b, c;
	register char *p, *q;

	read(0, buf, sizeof(buf));
	q = p = buf;
	while (*q != ' ')
		q++;
	*q = '\0';
	a = parse(p);
	q = p = q+1;
	while (*q != ' ')
		q++;
	*q = '\0';
	b = parse(p);
	q = p = q+1;
	while (*q != '\n')
		q++;
	*q = '\0';
	c = parse(p);

	if (a < b && b < c || c < b && b < a)
		p = "B";
	if (b < a && a < c || c < a && a < b)
		p = "A";
	if (b < c && c < a || a < c && c < b)
		p = "C";
	write(1, p, 1);

	return (0);
}
