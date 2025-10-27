#include <stdio.h>
int main(){
	int y;
	
	printf("enter the year: ");
	scanf("%d", &y);
	
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)){
    	printf("It is a leap yr\n");
	}
	else{
		printf("It is not an leap yr\n");
	}
	return 0;
}
