#include <stdio.h>
int sum(int);

int main()
{
	int n,result;
	printf("enter a number: ");
	scanf("%d",&n);
	result=sum(n);
	printf("sum=%d",result);
	
	return 0;
}

int sum(int n)
{
	if(n!=0)
	
	 return n+sum(n-1);
	else
	 return n;
}
