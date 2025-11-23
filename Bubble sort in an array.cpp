
#include <stdio.h>
int main() {
    int i, j, n, temp;
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(a) / sizeof(a[0]); // Correct initialization

    for(i = 0; i < n - 1; i++) { // Outer loop: number of passes
        for(j = 0; j < n - 1 - i; j++) { // Inner loop: compare adjacent
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("After Sorting the array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

