main()
{
	int v[100000];
	int h, w, i, j, a;

	scanf("%d%d", &h, &w);
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			scanf("%d", &v[i*w+j]);

	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			printf("%d", v[i+j*w]);
			j+1 != h && putchar(' ');
		}
		putchar('\n');
	}
}
