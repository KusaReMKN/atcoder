#include <stdio.h>

int main(void)
{
  int a, b, c, d;

  scanf("%d%d%d%d", &a, &b, &c, &d);
  printf("%d\n", a * d - b * c);

  return 0;
}
