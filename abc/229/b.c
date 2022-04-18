main()
{
	unsigned long long int a, b;

	scanf("%llu%llu", &a, &b);
	for (; a && b; a /= 10, b /= 10) {
		int ra, rb;

		ra = a % 10;
		rb = b % 10;
		if (ra + rb >= 10)
			return puts("Hard"), 0;
	}
	puts("Easy");
}
