#include "stdio.h"

int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long n = 0;
    scanf("%ld", &n);
    long result = 1;
    while (n > 1) {
        result *= n;
        --n;
    }
    printf("%ld", result);
	return 0;
}