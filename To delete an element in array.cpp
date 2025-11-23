#include <stdio.h>

int main() {
    int i, pos, size, valid = 1, a[50];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements in array:");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Enter the position of element to delete
    printf("Enter position of element to delete: ");
    scanf("%d", &pos);

    // Check whether the position is valid or not
    if (pos < 1 || pos > size) {
        printf("Invalid position\n");
        valid = 0;
    } else {
        // Shift elements to the left
        for (i = pos - 1; i < size - 1; i++) {
            a[i] = a[i + 1];
        }
        size--; // Reduce array size by one
    }

    // Print array after deletion
    if (valid) {
        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}

/* OUTPUT
   Enter the size of array: 5
    Enter the elements in array:23 43 53 246 57
    Enter position of element to delete: 3
    Array after deletion:
    23 43 246 57           */

