#include <stdio.h>
int main() {
    int i, n, sum = 0;

    printf("enter the size of the array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("enter the elements: \n");
    for(i = 0; i < n; i++){
    	scanf("%d", &a[i]);
	}
	
    for(i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    printf("Sum of array elements: %d\n", sum);
    return 0;
}
