main()
{
	auto r, c, a;
	register i, j;

	scanf("%d%d", &r, &c);
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++) {
			scanf("%d", &a);
			if (i+1 == r && j+1 == c)
				printf("%d\n", a);
		}
}
