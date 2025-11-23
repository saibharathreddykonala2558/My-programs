#include <stdio.h>
int main() {
    int i, n, max, min, temp;
    int a[100];  // Array declaration with max size 100

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    min = a[0];
    max = a[0];
    
    for(i = 0; i< n; i++){
    	if(a[i] > max){
    		max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	
	printf("The Maximum value is %d\n", max);
	printf("The Minimum value is %d\n", min);
}
