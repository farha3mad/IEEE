/****Write a C program to input two numbers from user and calculate their sum.*****/

#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf("Enter the second number:\n");
	scanf("%d",&num2);
	printf("The sum = %d",num1+num2);
	return 0;
}