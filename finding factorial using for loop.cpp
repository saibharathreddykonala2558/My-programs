#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;   // to store factorial (use long long for large numbers)

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %lld", n, fact);

    return 0;
}

