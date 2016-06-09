#include "stdio.h"

int calc(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 4;
    }
    return (calc(n - 1) + calc(n - 2));
}
int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", calc(n));
	return 0;
}