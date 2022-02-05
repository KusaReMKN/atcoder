main()
{
	int x;
	scanf("%d", &x);
	x % 100 ? puts("No")
		: x ? puts("Yes")
		: puts("No");
}
