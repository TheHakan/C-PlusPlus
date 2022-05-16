#include <stdio.h>
void minMax(int a[],int len,int *min,int *max);

int main()
{
	/*
	int x=5;
	int *ptr;
	ptr = &x;
	printf("%d",*ptr);
	*/
	
	/*
	int x=10;
	int *r=&x;
	x=4;
	*r=3;
	printf("%d",&x);
	*/
	
	/*
	int x=5;
	int *p;
	printf("%d",*p);
	*/
	
	/*
	int i=1;
	int *p=&i;
	q=p;
	*p=5;
	printf("%d",*p);
	*/
	
	int a[]={2,42,4,5,654,4,56,45,64,65,4,654,654,5};
	int min,max;
	int len=sizeof(a)/sizeof(a[0]);
	minMax(a,len,&min,&max);
	printf("min:%d and max:%d",min,max);
	
}

void minMax(int a[],int len,int *min,int *max)
{
	*min=a[0];
	*max=a[0];
	
	int i;
	for(i=1;i<len;i++)
	{
		if(a[i]>*max)
			*max=a[i];
		if(a[i]<*min)
			*min=a[i];	
			
	}
}
