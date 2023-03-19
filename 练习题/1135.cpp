#include <stdio.h>

int main() {
  int sum = 0, a, n;
  int x;
  scanf("%d %d", &a, &n);
  int temp = 0;
  double b = 0.1;
  for (int i = 1; i <= n; i++) {
    b *= 10; 
    temp += a * b;
    sum += temp;
    // printf("%d\n", temp);
  }
  printf("%d\n", sum);
  return 0;
}