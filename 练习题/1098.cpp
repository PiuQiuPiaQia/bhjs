#include <stdio.h>
int main() {
  int arr[10] = {};
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  scanf(("\n"));
  int height;
  int num = 0;
  scanf("%d", &height);
  for (int i = 0; i < 10; i++) {
    if (30 + height >= arr[i]) {
      num++;
    }
  }
  printf("%d", num);

  return 0;
}