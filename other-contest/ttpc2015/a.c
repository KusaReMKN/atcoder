#include <stdio.h>

int
main()
{
	int n;
	char c;

	scanf("%02d%c", &n, &c);
	switch (c) {
	case 'B':
		printf("Bachelor %02d\n", n);
		break;
	case 'M':
		printf("Master %02d\n", n);
		break;
	case 'D':
		printf("Doctor %02d\n", n);
		break;
	}

	return 0;
}
