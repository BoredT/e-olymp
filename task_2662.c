#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int selection_sort(int *arr, int n) {
	int res = 0;
	int first = arr[0];
	for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (i != min) {
	        //elements are guaranteed to be unique
	        if (arr[i] == first || arr[min] == first) ++res;
	        int dummy = arr[i];
	        arr[i] = arr[min];
	        arr[min] = dummy;
	    }
    }
    return res;
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
    printf("%d", selection_sort(arr, n));
}