#include<stdio.h>
int main()
{
	int x=6;
	int y=4;
	int *p1,*p2;
	p1=&x;
	p2=&y;
	
	printf("%p", p2-p1);
	printf("%p", p1--);
	printf("%p", p2+p1);//false
	printf("%d", *p2+*p1);
	printf("%d", (*p2) /(*p1));


	
}
