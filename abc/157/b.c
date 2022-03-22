#include <stdio.h>

typedef struct
{
	int number;
	int flag;
} Bingo;

int bingo(Bingo *p)
{
	if (p[4].flag)
	{
		if (p[0].flag && p[8].flag)
			return 1;
		if (p[1].flag && p[7].flag)
			return 1;
		if (p[2].flag && p[6].flag)
			return 1;
		if (p[3].flag && p[5].flag)
			return 1;
	}
	if (p[0].flag)
	{
		if (p[1].flag && p[2].flag)
			return 1;
		if (p[3].flag && p[6].flag)
			return 1;
	}
	if (p[8].flag)
	{
		if (p[2].flag && p[5].flag)
			return 1;
		if (p[6].flag && p[7].flag)
			return 1;
	}
	return 0;
}

int main(void)
{
	Bingo p[9];
	int a;
	int n;
	int i;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a);
		p[i].flag = 0;
		p[i].number = a;
	}

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int j;
		scanf("%d", &a);
		for (j = 0; j < 9; j++)
		{
			if (p[j].number == a)
			{
				p[j].flag = 1;
				if (bingo(p))
				{
					printf("Yes\n");
					return 0;
				}
			}
		}
	}
	printf("No\n");
	return 0;
}
