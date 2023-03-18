#include <cstring>
#include <stdio.h>

int main() {

  char *str;
  scanf("%s", str);
  int n = strlen(str);

  printf("%s", str);
  for (int i = n - 1; i >= 0; i--) {
    printf("%c", str[i]);
  }

  return 0;
}