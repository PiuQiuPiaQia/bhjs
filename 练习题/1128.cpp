#include <stdio.h>

int main() {

  int arr[4];
  for (int i = 0; i < 4; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 4; i > 0; i--) {
    for (int j = 0; j < i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int max = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = max;
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    printf("%d", arr[i]);
    if (i < 3) {
      printf(" ");
    }
  }

  return 0;
}