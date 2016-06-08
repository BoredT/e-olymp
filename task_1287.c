#include "stdio.h"

int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long a = 0;
    long b = 0;
    scanf("%ld", &a);
    scanf("%ld", &b);
    printf("%ld", a * b);
	return 0;
}