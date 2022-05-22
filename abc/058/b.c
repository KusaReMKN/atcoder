main()
{
	char o[51], e[51];
	register i;

	gets(o);
	gets(e);
	for (i = 0; o[i]; i++) {
		putchar(o[i]);
		if (e[i])
			putchar(e[i]);
	}
	putchar('\n');
}
