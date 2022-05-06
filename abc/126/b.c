main()
{
#define ism(x) (1 <= (x) && (x) <= 12)
	int a, b;

	scanf("%02d%02d", &a, &b);
	if (ism(a) && ism(b))
		puts("AMBIGUOUS");
	else if (ism(a))
		puts("MMYY");
	else if (ism(b))
		puts("YYMM");
	else
		puts("NA");
}
