#include <stdio.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);

  // n   true            false
  // 1   k-1              1
  // 2   (k-1)*(k-1+1)    1*(k-1)
  // 3   (k-1)*((k-1)*((k-1)*(k-1+1)+1*(k-1)))  1*(k-1)*(k-1+1)

  int res1 = k - 1, res0 = 1;
  for (int i = 2; i <= n; i++) {
    int temp = res1;
    res1 = (k - 1) * (res0 + res1);
    res0 = temp;
  }
  printf("%d", res1);

  // 1    0
  // 10 11    01
  // 110 111 101    010 011
  // 1110 1111 1101 1010 1011    0110 0111 0101
  return 0;
}