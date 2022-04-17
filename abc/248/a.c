main()
{
	int c, i, q;

	q = 0;
	for (i = 0; i <= 9; i++)
		q ^= '0' + i;
	while ((c = getchar()) != '\n')
		q ^= c;
	printf("%c\n", q);
}
