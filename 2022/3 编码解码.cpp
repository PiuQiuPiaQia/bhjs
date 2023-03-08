#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 1000


int main() {
	char str[M] = {};
	gets(str);
	int len;
	len = strlen(str);
	printf("%d\n", len);
	printf("%d", 'a');
	for (int i = 0; i < len; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			printf("%d", str[i] - 55);
		}
		if (str[i] >= 48 && str[i] <= 57) {
			printf("%d", str[i] - 48);
		}
		if (str[i] >= 97 && str[i] <= 122) {
			printf("%d", str[i] * -1 + 86);
		}
		if (str[i] == '!') {
			printf("-1");
		}
		if (str[i] == '@') {
			printf("-2");
		}
		if (str[i] == '#') {
			printf("-3");
		}
		if (str[i] == '$') {
			printf("-4");
		}
		if (str[i] == '%') {
			printf("-5");
		}
		if (str[i] == '^') {
			printf("-6");
		}
		if (str[i] == '&') {
			printf("-7");
		}
		if (str[i] == '*') {
			printf("-8");
		}
		if (str[i] == '(') {
			printf("-9");
		}
		if (str[i] == ')') {
			printf("-10");
		}
	}


	return 0;
}
