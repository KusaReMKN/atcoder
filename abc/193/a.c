#include <stdio.h>
 
int main(void)
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%f\n", 100.*(a-b) / a);
  return 0;
}
