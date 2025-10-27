#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i; // Add i to sum
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}

/*          OR            */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;
    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}

