#include "stdio.h"
#include <stdlib.h>

int cmp_func(const void *a, const void *b) {
   return *(int*)a - *(int*)b;
}

int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        int low = 0;
        int high = 0;
        int *arr = (int* )malloc(n * sizeof(int));

        if (!arr) {
            return 1;
        }

        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &low);
        scanf("%d", &high);
        qsort(arr, n, sizeof(int), cmp_func);

        int res = 0;

        for (int i = 0; i < n; ++i) {
            if (arr[i] >= low && arr[i] <= high) {
                ++res;
            }
        }
        printf("%d\n", res);
        free(arr);
    }
    return 0;
}