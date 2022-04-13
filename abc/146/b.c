main()
{
	int n, c;

	scanf("%d\n", &n);
	while ((c = getchar()) != '\n') {
		c -= 'A';
		c += n;
		c %= 'Z' - 'A' + 1;
		putchar('A' + c);
	}
	putchar('\n');
}
