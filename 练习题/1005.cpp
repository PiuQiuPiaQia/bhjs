#include <stdio.h>
 
int main(void) {
    double a;
    scanf("%lf", &a);
    double res = 5 * (a-32)/9;
    printf("c=%.2f", res);
    return 0;
}