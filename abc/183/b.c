main()
{
	double sx, sy, gx, gy;

	scanf("%lf%lf%lf%lf", &sx, &sy, &gx, &gy);
	printf("%10.10f\n", sy/(gy+sy) * (gx-sx) + sx);
}
