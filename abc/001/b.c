main()
{
	int m;

	scanf("%d", &m);
	printf("%02d\n", m < 100 ? 0
			: m <= 5000 ? m / 100
			: m <= 30000 ? m / 1000 + 50
			: m <= 70000 ? (m / 1000 - 30) / 5 + 80
			: 89);
}
