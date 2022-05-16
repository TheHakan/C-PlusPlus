#include <stdio.h>
int main()
{
	/*
	for(int j=0;j<=7;j++)
	{
		if(j==4)
		{
			continue;
		}
		printf("%d",j);
	}*/
	
	/*
	int n=7;
	while(n>0)
	{
		n--;
		if(n==5) // 5 will not go to output
		continue;
		printf("%d\t",n);
	}
	*/
	
	/*
	for(int i=1;i>0;i++) // i=1 Sonsuz i=0 nothing
	{
		printf("%d",i++);
	}
	*/
	
	/*
	int n=7;	
	while(n>0)
	{
		n--;
		if(n==3)
		continue;
		printf("%d ",n);
		n--;
	}
	*/
	
	/*
	int i,num,sum=0;
	for(i=0;i<=10;i++)
	{
		printf("enter a number:");
		scanf("%d",&num);
		if(num<0)
			continue;
		sum=sum+num;	
	}
	printf("sum=%d",sum);
	*/
	
	//Nested for loop
	/*
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{							
			printf("*");
	    }
	printf("\n");
	}
	*/
	
	/*
 	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{							
			printf("%d",j);
	    }
	    
	printf("\n");
	}
	*/
	
	/*
	int i,j,k=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{							
			printf("%d",k++);
	    }
	    
	printf("\n");
	}
	*/
	
	/*
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{							
			printf("*");
	    }
	printf("\n");
	}
	*/
	
	/*
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{							
			printf("%d",j);
	    }
	printf("\n");
	}
	*/
	
	//int a=10+10; //20
	// int a=10+'A'; //75
	
	/*
	int i,j;
	char ch='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{							
			printf("%c",ch++);
		
	    }
	ch='A';
	printf("\n");
	}	
	*/
	
	/*
	int i,j;
	char ch='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{							
			printf("%c",ch);
		  
	    }
	ch++;
	printf("\n");
	}
	*/
	
	int i,j;
	char ch='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{							
			printf("%c",ch);
		  	ch++;
	    }

	printf("\n");
	}
	
	
}
