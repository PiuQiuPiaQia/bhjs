#include <stdio.h>

int getSum(int n) {
  int sum = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }
  return sum;
}

int main() {
  for (int i = 2; i <= 3000; i++) {
    int res = getSum(i);
    if (i == getSum(res) && res > i) {
      printf("(%d,%d)", i, res);
    }
  }

  return 0;
}