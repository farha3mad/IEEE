/******Write a C program to input two numbers and perform all arithmetic operations********/
#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf("Enter the second number:\n");
	scanf("%d",&num2);
	printf("Sum = %d\n",num1+num2);
	printf("Difference = %d\n",num1-num2);
	printf("Product = %d\n",num1*num2);
	printf("Quotient = %0.3f\n",(float)num1/(float)num2);
	printf("Modulus = %d\n",num1%num2);
	
	
}