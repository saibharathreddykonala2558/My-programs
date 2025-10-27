
// // Simple Program
#include <stdio.h>
int main()
{
    printf("Hello, World\n");
    return 0;
}


// // Code for int() keyword

 #include <stdio.h>
 int main()
 {
     int a;
     printf("Enter a number: ");
     scanf("%d", &a);
     printf("You entered: %d\n", a);

     return 0;
 }


 // Code for float() keyword

 #include <stdio.h>
 int main()
 {
     float a;
     printf("Enter a float number: ");
     scanf("%f", &a);
     printf("You entered: %.2f\n", a);
     return 0;
 }


// // code for char (single)

 #include <stdio.h>
 int main()
 {
     char a;
     printf("Enter a character: ");
     scanf(" %c", &a);   
     printf("You entered: %c\n", a);
     return 0;
 }


/// Code for string

 #include <stdio.h>
 int main()
 {
     char a[50];
     printf("Enter a string: ");
     scanf("%s", a);   
     printf("You entered: %s\n", a);
     return 0;
 }


// //Arithmetice operations
 #include <stdio.h>
 int main() 
 {
     int a = 7, b = 9;
     printf("Add = %d\n", a + b);
     printf("Sub = %d\n", a - b);
     printf("Mul = %d\n", a * b);
     printf("Div = %d\n", a / b);
     printf("Mod = %d\n", a % b);
     return 0;
 }


// //Relational operators
 #include <stdio.h>
 int main()
 {
 	int x = 5, y = 10;
     printf("%d \n", x > y);
     printf("%d \n", x < y);
     printf("%d \n", x == y);
     printf("%d \n", x != y);
     return 0;
 }


// //logical operators

 #include <stdio.h>
 int main()
 {
 	int a = 2, b = 3, c = 4;
 	printf("%d \n",(a<b && b>c));
 	printf("%d \n",(a<b || b>c));
 	printf("%d \n",(a<b &&b>c));
 	return 0;
 }


// // Bitwise Operators
 #include <stdio.h>
 int main() {
     int a = 5, b = 3;
     printf("%d\n", a & b);  // AND
     printf("%d\n", a | b);  // OR
     printf("%d\n", a ^ b);  // XOR
     printf("%d\n", ~a);     // NOT
     printf("%d\n", a << 1); // Left shift
     printf("%d\n", a >> 1); // Right shift
     return 0;
 }


// // Assignment Operators

// #include <stdio.h>
 int main() {
     int a = 10;
     printf("%d\n", a);
     a += 5;   
     printf("%d\n", a);
     a -= 3;   
     printf("%d\n", a);
     a *= 2;   
     printf("%d\n", a);
     a /= 4;   
     printf("%d\n", a);
     a %= 3;   
     printf("%d\n", a);
     return 0;
 }


 // Conditional operators

 #include <stdio.h>
 int main()
 {
     int a, b, c;

     printf("Enter two numbers: ");
     scanf("%d%d", &a, &b);

     c = (a > b) ? a : b;  

     printf("\nBig number is: %d\n", c);

     return 0;
 }


 // Biggest of two numbers   

 #include <stdio.h>
 int main()
 {
 	int a,b,c;
 		printf("enter two numbers");
 		scanf("%d%d", &a,&b);
 		c = ((a>b)?(a):(b)); // conditional operator
 		printf("\n big number is : %d", c);
 		return 0;
			
 }


 //Biggest of three numbers

 #include <stdio.h>
 int main()
 {
 	int a,b,c,max;
 	printf("enter three numbers");
 	scanf("%d %d %d", &a, &b, &c);
 	max = (a>b)?(a>c? a:c): (b>c?b:c);
 	printf("\n big number is : %d", max);
 	return 0;
 }


