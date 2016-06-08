#include "stdio.h"

int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n = 0;
    scanf("%d", &n);
    printf("%d %d", n / 10, n % 10);
	return 0;
}