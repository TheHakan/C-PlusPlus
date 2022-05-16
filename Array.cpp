#include <stdio.h>
int main()
{
	/*
	int arr[10]={[0]=1,[5]=2,[6]=3};
	for(int i=0; i<10; i=i+1)
		printf("%d\t",arr[i]);
	*/
	
	/*
	int i,len,arr[]={20,2,0,20,2,0,2,20,2020,20,2,22,20,202,2020,2,20,2};
	len=sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<len; i++)
		printf("%d\n",arr[i]);
	*/	
	
	/*
	int i,n,max,min,j,secondmax;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter element-%d:",i);
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	min=a[0];
	j=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
			j=i;
	}
	secondmax=a[0];
	for(i=1;i<n;i++)
	{
		if(i==j)
		{
			i++;
		}
		else
		{
			if(a[i]>secondmax)
				secondmax=a[i];	
		}
		
	}
	
	/*
		for(i=1;i<n;i++)
	{
		if(a[i]<min)
			max=a[i];
	}
	*/
	
	/*
	printf("secondmax=%d ",secondmax);
//	printf("max=%d ",max);
	printf("location=%d",j);
//	printf("min=%d",min);
	*/
	
	
	int i,n,j,tmp;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter element-%d:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	} 	
 
	
	/*
		for(i=1;i<n;i++)
	{
		if(a[i]<min)
			max=a[i];
	}
	*/
	
	
//	printf("secondmax=%d ",secondmax);
//	printf("max=%d ",max);
	printf("location=%d",j);
//	printf("min=%d",min);
	
	
	
	
	
}
