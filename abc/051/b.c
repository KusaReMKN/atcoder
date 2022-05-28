main()
{
	auto k, s;
	register x, y, cnt;

	scanf("%d%d", &k, &s);
	cnt = 0;
	for (x = 0; x <= k; x++)
		for (y = 0; y <= k; y++)
			if (s >= (x + y) && s - (x + y) <= k)
				cnt++;
	printf("%d\n", cnt);
}
