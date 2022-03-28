main()
{
	int c[4][4];
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			c[i][j] = getchar(), (void)getchar();
	for (i = 0; i < 4; i++)
		printf("%c %c %c %c\n",
				c[3-i][3], c[3-i][2], c[3-i][1], c[3-i][0]);
}
