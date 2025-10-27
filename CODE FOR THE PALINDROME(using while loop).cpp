#include <stdio.h>
int main(){
	int n, t, sum = 0, r;
	
	printf("give me a number: ");
	scanf("%d", &n);
	t = n;
	while(n != 0){
		r = n % 10;
		sum = sum *10 + r;
		n = n / 10;
	}
	if(t == sum){
	printf("%d  number is a palindrome\n ", t);
	}
	else{
	printf("%d  number is not a palindrome\n ", t);
	}
	return 0;
}
