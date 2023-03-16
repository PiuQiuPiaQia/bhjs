#include <stdio.h>
#include <string.h>

int main() {
  char *str;
  scanf("%s", str);
  int n = strlen(str);
  for (int i = 0; i < n; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + 32;
    }
  }
  printf("%s", str);
  return 0;
}