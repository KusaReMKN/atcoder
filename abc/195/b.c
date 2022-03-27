main()
{
	int a, b, w;

	scanf("%d%d%d", &a, &b, &w);
	w *= 1000;
	if (floor((double)w / a) < ceil((double)w / b))
		puts("UNSATISFIABLE");
	else
		printf("%d %d\n",
				(int)ceil((double)w/b),
				(int)floor((double)w/a));
}
