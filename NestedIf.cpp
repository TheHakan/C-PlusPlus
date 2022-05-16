#include <stdio.h>
int main()
{
	/*
	int age;
	printf("Enter your age ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Person can vote");
	}
	else
	{
		printf("Person can't' vote");
	}
	*/
	
	/*
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	
	if(num1==num2)
	{
		printf("Result:%d=%d",num1,num2);
	}
	else if(num1>num2)
	{
		printf("Result:%d>%d",num1,num2);
	}
	else
	printf("Result:%d<%d",num1,num2);
	*/
	
	/*
	int num1 ,num2;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	
	if(num1>=num2)
	{
		if(num1==num2)
			printf("Result:%d=%d",num1,num2);
		else
		printf("Result:%d>%d",num1,num2);	
	}
	
	else
		printf("Result:%d<%d",num1,num2);
	*/
	
	
	int num; 
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Number is negative");
	}
	else
	{
		if(num>0)
			printf("Number is positive");
		else
			printf("Number is zero");
	}
	
	
	
	
}
