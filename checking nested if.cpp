#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 3; i++) {          // Outer loop
        for(j = 1; j <= 3; j++) {      // Inner loop
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
// OUTPUT
//1 1
//1 2
//1 3
//2 1
//2 2
//2 3
//3 1
//3 2
//3 3

/*               OR                */

#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 3; i++) {          // Outer loop (rows)
        for(j = 1; j <= 3; j++) {      // Inner loop (columns)
            printf("* ");
        }
        printf("\n");                   // Move to next row after inner loop ends
    }

    return 0;
}

