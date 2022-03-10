main()
{
	int a, b, s;

	scanf("%d%d", &a, &b);
	s = 0;
	s += a > b ? a-- : b--;
	s += a > b ? a-- : b--;
	printf("%d\n", s);
}
