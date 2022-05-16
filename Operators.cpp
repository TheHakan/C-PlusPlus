#include <stdio.h>
int main()
{
	int a,b,c;
	printf("please enter two numbers");
	scanf("%i %i",&a,&b);
	
	c=a+b;
	printf("%d+%d=%d ",a,b,c);
	
	c=a-b;
	printf("%d-%d=%d ",a,b,c);
	
	c=a*b;
	printf("%d*%d=%d ",a,b,c);
	
	c=a/b;
	printf("%d/%d=%d ",a,b,c);
	
	c=a%b;
	printf("%d%%%d=%d ",a,b,c);
}
