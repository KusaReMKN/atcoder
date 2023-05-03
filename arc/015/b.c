#include <stdio.h>

enum {
	MOUSHOBI,
	MANATSUBI,
	NATSUBI,
	NETTAIYA,
	FUYUBI,
	MAFUYUBI,
	DAYMAX
};

int
main(void)
{
	int n;
	double max, min;
	int day[DAYMAX] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf%lf", &max, &min);
		if (max >= 35.0)
			day[MOUSHOBI]++;
		else if (max >= 30.0)
			day[MANATSUBI]++;
		else if (max >= 25.0)
			day[NATSUBI]++;
		if (min >= 25.0)
			day[NETTAIYA]++;
		if (min < 0.0 && max >= 0.0)
			day[FUYUBI]++;
		if (max < 0.0)
			day[MAFUYUBI]++;
	}
	printf("%d %d %d %d %d %d\n",
			day[MOUSHOBI], day[MANATSUBI], day[NATSUBI],
			day[NETTAIYA], day[FUYUBI], day[MAFUYUBI]);

	return 0;
}
