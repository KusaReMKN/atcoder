main()
{
	int h, m, s;

	scanf("%d", &s);
	m = s / 60;
	s %= 60;
	h = m / 60;
	m %= 60;
	printf("%02d:%02d:%02d\n", h, m, s);
}
