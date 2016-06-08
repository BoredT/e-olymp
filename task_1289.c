#include "stdio.h"

int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long a = 0;
    long b = 0;
    long c = 0;
    scanf("%ld", &a);
    scanf("%ld", &b);
    scanf("%ld", &c);
    printf("%ld\n", a * b + b * c + a * c);
	return 0;
}