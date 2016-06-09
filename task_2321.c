#include "stdio.h"
#include <stdlib.h>


int cmp_func(const void *a, const void *b) {
   return *(int*)a - *(int*)b;
}

int main(void) {
	int n = 0;
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    int *arr = (int* )malloc(n * sizeof(int));

    if (!arr) {
    	return 1;
    }

    for (int i = 0; i < n; ++i) {
    	scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), cmp_func);

    for (int i = 0; i < n; ++i) {
    	printf("%d ", arr[i]);
    }
	return 0;
}