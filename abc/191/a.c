#include <stdio.h>
int main(void)
{
  int v,t,s,d;
  scanf("%d%d%d%d", &v, &t, &s, &d);
  if (v * t <= d && d <= v * s)
    puts("No");
  else
    puts("Yes");
  return 0;
}
