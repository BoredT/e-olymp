#include "stdio.h"
#include <stdlib.h>

int bubble_sort(int *a, int length)
{
    int counter = 0;
    for (int i = 0; i < length-1; i++) {
        int swapped = 0;
        for (int j = 0; j < length-i-1; j++) {
            if (a[j] > a[j+1]) {
                int b = a[j]; 
                a[j] = a[j+1];
                a[j+1] = b;
                swapped = 1;
                ++counter;
            }
        }

        if(!swapped)
            break;
    }
    return counter;
 }

int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n = 0;
    scanf("%d", &n);
    int *arr = (int* )malloc(n * sizeof(int));

    if (!arr) {
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", bubble_sort(arr, n));
	return 0;
}