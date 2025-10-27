#include <stdio.h>
int main ()
{
	double result, first, second;
	char oprt;
	
	printf("enter the first number: ");
	scanf("%lf", &first);
	
	printf("enter the second number: ");
	scanf("%lf", &second);
	
	printf("enter the operator: ");
	scanf(" %c", &oprt);
	
	switch(oprt){
	case '+':
		result = first + second;
		break;
	case '-':
		result = first - second;
		break;
	case '*':
		result = first * second;
		break;
	case '/':
		if(second != 0)
           result = first / second;
        else {
            printf("Error: Division by zero!\n");
            return 1;
        }
	    result = first / second;
	    break;
	default:
		printf("Error! the given vaue is invalid\n");
		break;								
	}
	printf("The result is %.2lf\n", result);
	return 0;
}


