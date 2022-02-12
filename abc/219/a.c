main()
{
	int x;

	scanf("%d", &x);
	if (x < 40)
		printf("%d\n", 40 - x);
	else if (x < 70)
		printf("%d\n", 70 - x);
	else if (x < 90)
		printf("%d\n", 90 - x);
	else
		printf("expert\n");
}
