main()
{
	int a[10], i;

	for (i = 0; i < 10; i++)
		scanf("%d", a+i);

	printf("%d\n", a[a[*a]]);
}
