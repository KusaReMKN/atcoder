#include <stdio.h>
#include <math.h>

int main(void)
{
  long long p, q;
  int n, d;
  int i, res = 0;
  
  scanf("%d%d", &n, &d);
  for (i = 0; i < n; i++) {
    scanf("%lld%lld", &p, &q);
    if (sqrt(p*p+q*q) <= d)
      res++;
  }
  printf("%d\n", res);
  return 0;
}
