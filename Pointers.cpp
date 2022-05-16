#include <stdio.h>
int main()
{
	/*
	int a;
	float b;
	char c;
	
	int *p1=&a;
	float *p2=&b;
	char *p3=&c;
	
	printf("address of a=%p\n",&a); // &a ve p1 possible
	printf("address of b=%p\n",p2);
	printf("address of c=%p",p3);
	*/
	
	int a,b,sum=0;
	int *p,*q,*s;
	
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	
	p=&a;
	q=&b;
	sum=*p + *q;
	//printf("sum is =%d",sum);
	printf("address of a=%p and value=%d\n",p,a);
	printf("address of b=%p and value=%d\n",q,b);
	//printf("sum is =%d",sum);
	printf("address of sum=%p and value=%d",s,sum);
}
