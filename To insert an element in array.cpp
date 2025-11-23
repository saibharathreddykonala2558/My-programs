#include <stdio.h>
int main()
{
    int i, n, pos, num, a[50];

    // Enter number of elements in array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Enter array elements
    printf("Enter elements in array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Enter position where you want to insert the new element
    printf("Enter position where you want to insert: ");
    scanf("%d", &pos);

    // Enter the new element to insert
    printf("Enter the new element: ");
    scanf("%d", &num);

    // Shift elements to the right to make space for new element
    for (i = n; i >= pos; i--) {
        a[i] = a[i-1];
    }
    // Insert new element at given position
    a[pos-1] = num;
    n++;

    // Print array after insertion
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
/*  OUTPUT 
    Enter number of elements in array: 5
    Enter elements in array:
    10 20 30 40 50
    Enter position where you want to insert: 3
    Enter the new element: 99
    Array after insertion:
    10 20 99 30 40 50          */
