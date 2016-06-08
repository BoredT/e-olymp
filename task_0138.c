#include "stdio.h"

int main(void) {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n = 0;
    scanf("%d", &n);
    int arr[] = {500, 200, 100, 50, 20, 10};
    if (n % 10 != 0) {
    	printf("-1");
    } else {
    	int i = 0;
    	int count = 0;
    	while (n > 0) {
    		if (n - arr[i] < 0) {
    			++i;
    		} else {
    			++count;
    			n -= arr[i];
    		}
    	}
    	printf("%d\n", count);
    }
	return 0;
}