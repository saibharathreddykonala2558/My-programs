#include <stdio.h>
int main() {
    int a[100], n, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Removing duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; ) {
            if(a[i] == a[j]) {
                // Shift elements left to overwrite duplicate
                for(k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;  // Reduce array size as duplicate is removed
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

