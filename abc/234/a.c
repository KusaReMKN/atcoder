f(x)
{
	return x * x + 2 * x + 3;
}

main()
{
	int t;

	scanf("%d", &t);
	printf("%d\n", f(f(f(t) + t) + f(f(t))));
}
