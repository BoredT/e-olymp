#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(a,b) (((a)<(b))?(a):(b))

struct pupil {
	char surname[21];
	char name[21];
	char class[4];
	char date[9];
};

int cmp_class(const char* str1, const char* str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2) {
		return len1 - len2;
	}
	for (int i = 0; i < MIN(len1, len2); ++i) {
		if (str1[i] != str2[i]) {
			return str1[i] - str2[i];
		}
	}
	return 0;
}

int cmp_str(const char* str1, const char* str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0; i < MIN(len1, len2); ++i) {
		if (str1[i] != str2[i]) {
			return str1[i] - str2[i];
		}
	}
	return len1 - len2;
}

int cmp_func(const void *a, const void *b) {
   	struct pupil aa = *(struct pupil*)a;
   	struct pupil bb = *(struct pupil*)b;
	int class = cmp_class(aa.class, bb.class);

	//in the same class
	if (!class) {
		return cmp_str(aa.surname, bb.surname);
	} else {
		return class;
	}
}

int main(void) {
	int n = 0;
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    struct pupil *arr = (struct pupil* )malloc(n * sizeof(struct pupil));
    memset(arr, 0, sizeof(arr));

    if (!arr) {
    	return 1;
    }

    for (int i = 0; i < n; ++i) {
    	scanf("%s", &arr[i].surname);
    	scanf("%s", &arr[i].name);
		scanf("%s", &arr[i].class);
		scanf("%s", &arr[i].date);
    }

    qsort(arr, n, sizeof(struct pupil), cmp_func);

    for (int i = 0; i < n; ++i) {
    	printf("%s %s %s %s\n", arr[i].class, arr[i].surname, arr[i].name, arr[i].date);
    }
	return 0;
}