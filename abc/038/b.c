main()
{
	auto h1, w1, h2, w2;

	scanf("%d%d%d%d", &h1, &w1, &h2, &w2);
	if (h1 == h2 || h1 == w2 || w1 == h2 || w1 == w2)
		puts("YES");
	else
		puts("NO");
}
