#include <stdio.h>

int main(void)
{
  int a, b;
  
  scanf("%d%d", &a, &b);
  if (15 <= a+b && 8 <= b) return printf("1\n"), 0;
  if (10 <= a+b && 3 <= b) return printf("2\n"), 0;
  if (3 <= a+b) return printf("3\n"), 0;
  printf("4");
  return 0;
}
