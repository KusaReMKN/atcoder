comp(a, b)
	int *a, *b;
{
	return (10 - *a % 10) % 10 - (10 - *b % 10) % 10;
}

main()
{
	auto dish[5];
	register i, time;

	scanf("%d%d%d%d%d", dish+0, dish+1, dish+2, dish+3, dish+4);
	qsort(dish, 5, sizeof(dish[0]), comp);
	time = 0;
	for (i = 0; i < 5; i++) {
		if (time % 10 != 0)
			time = (time / 10 + 1) * 10;
		time += dish[i];
	}
	printf("%d\n", time);
}
