#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 2; i < n; i++) {
    int j;
    for (j = 2; j < i; j++) {
      if (i % j == 0) {
        break;
      }
    }
    if (j == i) {
      printf("%d\n", i);
    }
  }
  return 0;
}