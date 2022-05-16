#include <stdio.h>
int fac(int);

int main()
{
	int n,result;
	printf("enter a number: ");
	scanf("%d",&n);
	result=fac(n);
	printf("factorial=%d",result);
	
	return 0;
}

int fac(int n)
{
	if(n>=1)
	 return n*fac(n-1);
	else
	 return 1;
}
