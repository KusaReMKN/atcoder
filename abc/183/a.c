#include <stdio.h>

int main(void)
{
  int x;

  scanf("%d", &x);

  printf("%d\n", x < 0 ? 0 : x);

  return 0;
}
