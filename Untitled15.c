//Write a C program to input an integer from the keyboard and convert the number into a positive
//number, if the user input is a negative value.

#include <stdio.h>
int main(void)
{
//	creating variables
	int num1;
	
//	input number
	printf("Enter your number : ");
	scanf("%d",&num1);
	
//	calculation & Selection
	if(num1<0)
	{
		num1=num1*-1;
	}
	else if(num1==0)
	{
		return 0;	
	}
	else
	{
		num1=num1;
	}
	
	printf("Your Number is : %d",num1);
	return 0;
}
