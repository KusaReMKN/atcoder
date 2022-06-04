main()
{
	auto a, b;
	char s[7];

	scanf("%d%d", &a, &b);
	sprintf(s, "%d%d", a, b);
	sscanf(s, "%d", &a);
	printf("%d\n", a * 2);
}
