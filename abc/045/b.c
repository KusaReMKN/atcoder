main()
{
	char sa[101], sb[101], sc[101];
	register ia, ib, ic, turn;

	gets(sa);
	gets(sb);
	gets(sc);
	ia = ib = ic = 0;
	turn = 'a';
	while (turn)
		switch (turn) {
		case 'a':
			turn = sa[ia++];
			break;
		case 'b':
			turn = sb[ib++];
			break;
		case 'c':
			turn = sc[ic++];
			break;
		}
	printf("%c\n", !sa[ia-1] ? 'A' : !sb[ib-1] ? 'B' : 'C');
}
