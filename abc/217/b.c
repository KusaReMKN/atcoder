main()
{
	int c;
	char a_c[4];

	c = 'B' ^ 'R' ^ 'G' ^ 'H';
	while (gets(a_c))
		c ^= a_c[1];

	printf("A%cC\n", c);
}
