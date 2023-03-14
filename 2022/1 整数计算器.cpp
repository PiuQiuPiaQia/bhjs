#include <stdio.h>

int main() {
	int op, a, b;
	scanf("%d %d %d", &op, &a, &b);
	long long ans;
	if (op == 1) {
		ans = a + b;
	} else if (op == 2) {
		ans = a - b;
	} else if (op == 3) {
		ans = a * b;
	} else if (op == 4) {
		ans = a / b;
	}

	if (ans != 1e18) {
		printf("%lld", ans);
	} else {
		printf("DIV 0");
	}
	return 0;
}
