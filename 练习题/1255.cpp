// https://www.dotcpp.com/oj/problem1255.html

// 断环为链 arr[n]
// 确定区间长度 len
// 循环起点 start
// 确定区间终点 end = start + len - 1
// 循环区间分段点位置 k
// 比较取max: dp[start][end] 与 dp[start][k] + dp[k][end] + arr[start] * arr[k] * arr[end]
// 遍历区间，找到区间长度为n，dp最大值