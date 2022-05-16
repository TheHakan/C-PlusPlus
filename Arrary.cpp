#include <stdio.h>
int main()
{
	int i;
	
	
	
	//int num[10]={5};
	//printf("%d",num[10]);
	
	/*
	int num[10];
	for(i=0;i<10;i++)
	{
		printf("Enter number:");
		scanf("%d",&num[i]);
	
		
	}
	for(i=0;i<10;i++)
	{
		printf("%d ", num[i]);	
	}
	*/
	
	/*
	int arr[5];
	for(i=0;i<5;i++)
	{
		printf("enter number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("array[%d]=%d\n",i,arr[i]);
	}54
	*/
	
	/*
	int arr[5]={30,40,100,60,50};
	for (int i=0;i<5;i++)
		printf("Element[%d]=%d\n",i,arr[i]); 
	*/
	
	/*
	int avg,sum=0,arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("Please enter a number:");
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<5;i++)
	{
		sum+=arr[i];
		avg=sum/5;
	
	}
		printf("Sum is=%d\nAverage is=%d ", sum,avg);	
	*/
	
	int n;
	
	printf("enter size of array:");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("your numbers are:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t", arr[i]);
	}
}
