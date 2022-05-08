main()
{
	auto h, w, r, c;

	scanf("%d%d%d%d", &h, &w, &r, &c);
	printf("%d\n", 4 - (r == 1) - (r == h) - (c == 1) - (c == w));
}
