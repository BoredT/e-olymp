#include "stdio.h"
#include <stdlib.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

int cmp_func(const void *a, const void *b) {
	struct time left = *(struct time*)a;
	struct time right = *(struct time*)b;	
	int left_seconds = left.hours * 3600 + left.minutes * 60 + left.seconds;
	int right_seconds = right.hours * 3600 + right.minutes * 60 + right.seconds;
	return left_seconds - right_seconds;
}

int main(void) {
	int n = 0;
	struct time *times = 0;
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    times = (struct time* )malloc(n * sizeof(struct time));

    if (!times) {
    	return 1;
    }

    for (int i = 0; i < n; ++i) {
    	scanf("%d", &times[i].hours);
    	scanf("%d", &times[i].minutes);
    	scanf("%d", &times[i].seconds);
    }
    qsort(times, n, sizeof(struct time), cmp_func);
    for (int i = 0; i < n; ++i) {
    	printf("%d %d %d\n", times[i].hours, times[i].minutes, times[i].seconds);
    }
	return 0;
}