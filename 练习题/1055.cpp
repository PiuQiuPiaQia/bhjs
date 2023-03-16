#include <stdio.h>

// %d —— 以十进制形式打印一个整型值
// %o ——   八进制
// %x ——   十六进制
int main() {
    int x;
    scanf("%d", &x);
    printf("%o", x);
    return 0;
}