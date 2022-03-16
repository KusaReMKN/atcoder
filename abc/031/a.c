main()
{
	int a, d;

	scanf("%d%d", &a, &d);
	printf("%d\n", a > d ? a * ++d : ++a * d);
}
