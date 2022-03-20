main() {
	int s, n;

	s = 0;
	scanf("%d", &n);
	s ^= n;
	scanf("%d", &n);
	s ^= n;
	scanf("%d", &n);
	s ^= n;
	printf("%d\n", s);
}
