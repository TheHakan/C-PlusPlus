#include <stdio.h>
void prime();

int main()
{
	prime();
	return 0;
}

void prime()
{
	int n,i,flag=0;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		 flag=1; // not prime number
	}
	if(flag==0)
	 printf("%d is prime a number.",n);
	else
	 printf("%d is not prime a number.",n);
}
