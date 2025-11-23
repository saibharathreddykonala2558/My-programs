#include <stdio.h>
int main()
{
    int i, n, key, flag = 0, position = -1;
    int x[50];

    // Enter number of elements in array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Enter array elements
    printf("Enter array elements:  ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Enter element to search in array
    printf("Enter element to search:  ");
    scanf("%d", &key);

    // Search for 'key' in array
    for (i = 0; i < n; i++) {
        if (key == x[i]) {
            flag = 1;
            position = i;
            break;
        }
    }
    // Print result of search
    if (flag == 1) {
        printf("Element found at place %d\n", position);
    } else {
        printf("Not found\n");
    }
}

/*  OUTPUT  
    Enter number of elements: 6
    Enter array elements:  
    5 17 23 8 42 31
    Enter element to search:  
    8
    Element found at place 3            */
