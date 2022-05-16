#include <stdio.h>
int main()
{
	/*
	int a;
	printf("Please enter number:");
	scanf("%i", &a);
	//printf("You entered %%%i",a); // percent
	printf("You entered %%%i\\n",a); // output \n
	*/
	
	/*
	int a=5,r,b;
	//r= ++a + ++a;
	//b= a++ + a++;
	printf("%d %d ",r,b);
	*/
	
	/*
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	
	if(number<0)
	{
	printf("Number is negative\n");	
	}
	
	if(number>0)
	{
	printf("Number is positive\n");	
	}
	*/
	
	/*
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	
	//condition
	if(num%2==0)
	{
		printf("%d is even number",num);
	}
	else
	{
		printf("%d is odd number",num);
	}
	*/
	
	
	int num1 ,num2;
	printf("Enter two number:");
	scanf("%d %d", &num1,&num2);
	
		if(num1==num2)
	{
		printf("Resul:%d = %d\n",num1,num2);
	}
	else if (num1>num2)
	{
		printf(" Resul:%d > %d\n",num1,num2);
	}
	
	else{
		printf("resul:%d < %d",num1,num2);
	}
}
