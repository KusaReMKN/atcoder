main()
{
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (abs(a-c) <= d)
		puts("Yes");
	else if (abs(a-b) <= d && abs(b-c) <= d)
		puts("Yes");
	else
		puts("No");
}
