#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int *p;
	
	
	p=(int *)malloc(sizeof(int));
	*p=10;
	printf("Address=%p",p);
	printf("\nValue=%d",*p);
	free(p);
	p=(int *)malloc(20*sizeof(int));
	*p=20;
	printf("\nAddress=%p",p);
	printf("\nValue=%d",*p);
}
