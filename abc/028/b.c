main()
{
	register c;
	auto buf[6];
	register i;

	for (i = 0; i < 6; i++)
		buf[i] = 0;
	while ((c = getchar()) != '\n')
		buf[c-'A']++;
	printf("%d %d %d %d %d %d\n",
			buf[0], buf[1], buf[2], buf[3], buf[4], buf[5]);
}
