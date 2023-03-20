#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    if (i < 2) {
      arr[i] = 1;
    } else {
      arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("%d", arr[i]);
    if (i < n) {
      printf(" ");
    }
  }
  return 0;
}