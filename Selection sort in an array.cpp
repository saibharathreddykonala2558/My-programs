#include <stdio.h>
int main() {
    int i, j, n, temp, min;
    int a[] = {54, 20, 56, 3, 36, 45, 2};
    n = sizeof(a) / sizeof(a[0]); 

    for(i = 0; i < n - 1; i++) {   //  no. of passess
    min = i;
        for(j = i + 1; j < n ; j++) {   // comparing and swaping the elemnets 
            if(a[j] < a[min]) {
            	min = j;
            }
        }
        if(min != i){
        	temp = a[min];
            a[min] = a[i];
            a[i] = temp;
		}
    }

    printf("After Sorting the array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

