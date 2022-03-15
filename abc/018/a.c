#define show(a, b, c) printf("%d\n%d\n%d\n", a, b, c)

main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (a < b) {
		if (c < a)
			show(2, 1, 3);
		else if (b < c)
			show(3, 2, 1);
		else
			show(3, 1, 2);
	} else {
		if (c < b)
			show(1, 2, 3);
		else if (a < c)
			show(2, 3, 1);
		else
			show(1, 3, 2);
	}
}
