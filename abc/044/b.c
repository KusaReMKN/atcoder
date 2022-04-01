main()
{
	int q[256] = { 0 };
	int c, i;

	while ((c = getchar()) != '\n')
		q[c]++;
	for (i = 0; i < 256; i++)
		if (q[i] & 1)
			return puts("No"), 0;
	puts("Yes");
}
