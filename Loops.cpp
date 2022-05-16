#include <stdio.h>
int main()
{
	/*
	//1
	int i,n,sum=0;
	printf("Input value of terms:");
	scanf("%d",&n);
	printf("\nThe first %d numbers are:\n",n);
	for(i=0;i<=n;i++)
	{
		printf("%d",i);
		sum+=i;
	}
	printf("\nThe sum of natural numbers upto %d terms : %d\n",n,sum);
	*/
	
	/*
	//2
	int i,n,sum=0;
	float avg;
	printf("Input the 10 numbers : \n");
	for(i=1;i<=10;i++)
	{
		printf("Number-%d :",i);
		scanf("%d",&n);
		sum+=n;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe avg is %f",sum,avg);
	*/
	
	/*
	//3
	int i,n,sum=0;
	
	printf("Input number of terms : ");
	scanf("%d",&n);
	printf("\nThe odd numbers are : ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",2*i-1);
		sum+=2*i-1;
	}
	printf("\nThe Sum of odd Natural Number upto %d terms : %i\n",n,sum);
	*/
	
	/*
	//4
	int i,n,sum=0;
	printf("Input the number of terms :");
	scanf("%d",&n);
	printf("\nThe square natural upto %d terms are :",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i);
		sum=i*i;
	}
	printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);
	*/
	
	/*
	//5
	int i,f=1,num;
	
	printf("Input the number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
		f=f*i;
	
	printf("The Factorial of %d is: %d\n",num,f);
	*/
	
	/*
	//6
	int prv=0,pre=1,trm,i,n;
	printf("Input number of terms to display : ");
	scanf("%d",&n);
	printf("Here is the Fibonacci series upto %d terms : \n",n);
	printf("%5d %5d",prv,pre);
	
	for(i=3;i<=n;i++)
	{
		trm=prv+pre;
		printf("%5d",trm);
		prv=pre;
		pre=trm;
	}
	*/
}
