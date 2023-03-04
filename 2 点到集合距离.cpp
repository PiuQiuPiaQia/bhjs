#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int v[1000];
	int x;
	int a;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	scanf("%d", &x);

	int ans = 1e9 + 7;
	for (int i = 0; i < n; i++) {
		int num = abs(v[i] - x);
		if (num < ans) {
			ans = num;
		}
	}
	printf("%d", ans);
	return 0;
}
