#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int jishu = 0;
  if (n % 2) {
    jishu = 1;
  }
  int arr[n + 1][n + 1];
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      scanf("%d", &arr[i][j]);
      if (i == j) {
        sum += arr[i][j];
      }
      if (j == n - i + 1) {
        sum += arr[i][j];
      }
    }
  }
  if (jishu) {
    sum -= arr[(n + 1) / 2][(n + 1) / 2];
  }

  printf("%d", sum);

  return 0;
}