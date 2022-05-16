#include <stdio.h>
int main()
{
	/*
	int a;
	printf("Enter a number 1-3:");
	scanf("%i",&a);
	
	switch(a)
	{
		case 1:
			printf("hello");
			break;
			
		case 2:
			printf("good morning");
			break;	
			
		case 3:
			printf("good evening");
			break;
			
		default:
			printf("You did not entered number");
			break;		
	}
	*/
	
	/*
	int num;
	printf("enter a number 1-6:");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
		case 2:
		case 3:
			printf("you entered 1,2 or 3");
			break;	
		
		case 4:
		case 5:
		case 6:
			printf("you entered 4,5 or 6");
			break;
			
		default:
		printf("you entered a number greater than six");	
	}
	*/
	
	/*
	int num=2;
	switch(num+1)
	{
		case 1:
			printf("case 1:value is:%d\n",num);
			break;
		case 2:	
			printf("case 2:value is:%d\n",num);
			break;
		case 3:	
			printf("case 3:value is:%d\n",num);
			break;
		default:
		printf("deafult:value is:%d",num);	
	}	
	*/
	
	/*
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("unlu");
			break;
		default:
			printf("unsuz");			
	}
	*/
	
	/*
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	
	printf("value is:%c\n",ch);
	printf("value is:%d\n",ch);
	*/
	
	/*
	int n;
	printf("enter a number:");
	scanf("%i",&n);
	
	switch(n>0)
	{
		case 1:
			printf("positive");
			break;
		case 0:
			switch(n<0)
			{
				case 1:
					printf("negative");
					break;
				case 0:
					printf("zero");
					break;
			}
		break;		
			
	}
	*/
	
	/*
	int i;
	for(i=0;i<10;i++)
	{
		printf("Xaqan\n");
	}
	*/
	
	int i,sum;
	for(i=1;i<=10;i++)
	{
		sum=sum+i; //sum+=i
	}	
	printf("result:%d",sum);
}
