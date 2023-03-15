// https://www.dotcpp.com/oj/problem1177.html
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
  int T;
  scanf("%d", &T);

  while (T--) {
    int N;
    scanf("%d", &N);
    int trangle[101][101] = {0};
    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= i; j++) {
        scanf("%d", &trangle[i][j]);
      }
    }

    int dp[101][101] = {0};

    for (int i = N; i >= 1; i--) {
      for (int j = 1; j <= i; j++) {
        dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + trangle[i][j];
      }
    }
    printf("%d\n", dp[1][1]);
  }
  return 0;
}