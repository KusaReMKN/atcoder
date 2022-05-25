main()
{
	auto h, w;
	char a[101];
	register i;

	scanf("%d%d", &h, &w);
	for (i = 0; i < w+2; i++)
		putchar('#');
	putchar('\n');
	for (i = 0; i < h; i++)
		scanf("%s", a), printf("#%s#\n", a);
	for (i = 0; i < w+2; i++)
		putchar('#');
	putchar('\n');
}
