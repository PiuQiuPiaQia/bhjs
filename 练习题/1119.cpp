#include <stdio.h>
int main() {
  int num;
  int h, d, u;
  scanf("%d", &num);
  h = num / 100;
  d = num % 100 / 10;
  u = num % 10;
  int res;
  res = h * h * h + d * d * d + u * u * u;
  printf("%d", res == num);
  return 0;
  ;
}