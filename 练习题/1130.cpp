#include <stdio.h>

int strlen(char *str) {
  int i = 0;
  while (str[i++] != '\0')
    ;
  return i;
}
int main() {

  char *str;
  scanf("%s", str);
  int len = strlen(str);
  int num = 0;
  for (int i = 0; i < len; i++) {
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
      num++;
    }
  }
  printf("%d", num);

  return 0;
}