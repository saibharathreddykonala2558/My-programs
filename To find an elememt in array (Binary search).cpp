#include <stdio.h>
int main() {
    int i, n, l = 0, r, mid, a[50], key, found = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter elements in the array (sorted order):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter key value:\n");
    scanf("%d", &key);

    r = n - 1;           // Initialize right index

    while (l <= r) {
        mid = (l + r) / 2;
        if(a[mid] == key) {
            found = 1;
            break;
        } else if (a[mid] < key) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    if (found)
        printf("Key %d found at position %d.\n", key, mid + 1); // Position is mid+1 (1-based)
    else
        printf("Key %d not found in array.\n", key);

    return 0;
}

