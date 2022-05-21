main() {
	register i, c;

	i = 1;
	while ((c = getchar()) != '\n')
		(i++ & 1) && putchar(c);
	putchar('\n');
}
