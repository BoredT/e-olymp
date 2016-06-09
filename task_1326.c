#include "stdio.h"

int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1 || n == 2) {
        printf("%d", n);
    } else {
        printf("%d", n * (n - 1) * (n - 2));
    }
	return 0;
}