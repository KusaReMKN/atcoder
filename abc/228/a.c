main()
{
	int s, t, x;

	scanf("%d%d%d", &s, &t, &x);
	puts((t - s + 24) % 24 > (x - s + 24) % 24 ? "Yes" : "No");
}
