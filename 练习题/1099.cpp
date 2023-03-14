#include <stdio.h>
typedef struct {
    int start;
    int end;
} route;
int main() {
    int l, n;
    scanf("%d %d", &l, &n);
    int arr[10000] = {};
    route routes[n];
    for (int i = 0; i < n; i ++) {
        scanf("%d %d", &routes[i].start, &routes[i].end);
    }
    for (int i = 0; i <= l; i++) {
        arr[i] = 1;
    }
    for (int i = 0; i < n; i ++ ) {
        for (int j = routes[i].start; j <= routes[i].end; j ++ ) {
            arr[j] = 0;
        }
    }
    int num = 0;
    for (int i = 0; i <= l; i++) {
        if (arr[i] == 1) {
            num ++;
        }
    }
    printf("%d", num);
    
    return  0;
}