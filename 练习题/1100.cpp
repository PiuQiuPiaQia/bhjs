#include <algorithm>
#include <stdio.h>
using namespace std;

typedef struct Grass {
  int time;
  int value;
} grass;

int main() {
  int time, n;
  scanf("%d %d", &time, &n);
  grass gra[n];
  int dp[101][1001] = {0};
  for (int i = 1; i <= n; i++) {
    scanf("%d %d", &gra[i].time, &gra[i].value);
  }

  // 从1开始，否则i-1会出现负一
  for (int i = 1; i <= n; i++) {      // 从第一个物品开始记录
  // 从1开始，0时间没意义
    for (int j = 1; j <= time; j++) { // 从时间为1开始记录
      if (gra[i].time > j) {
        dp[i][j] = dp[i - 1][j]; // 剩余时间不够装此物品
      } else {
        dp[i][j] = max(dp[i - 1][j - gra[i].time] + gra[i].value,
                       dp[i - 1][j]); // 装此物品的前提下，剩余时间的最优值
      }
    }
  }

// dp表
//   for (int i = 0; i <= n; i++) {
//     for (int j = 0; j <= time; j++) {
//       printf("%d", dp[i][j]);
//     }
//     printf("\n");
//   }

  printf("%d", dp[n][time]);

  return 0;
}