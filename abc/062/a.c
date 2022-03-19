group()
{
	int n;

	scanf("%d", &n);
	switch (n) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 1;
	case 4: case 6: case 9: case 11:
		return 2;
	case 2:
		return 3;
	}
}

main()
{
	if (group() == group())
		puts("Yes");
	else
		puts("No");
}
