#include <stdio.h>

int main()
{
	/*
	int x=1,z=1;
	 if((x==3)||(--x))x++;
	 else if ((z==2)||(z++))z++;
	 else ++x;
	 printf("%d %d",x,z); 
	*/
	
	/*
	int i=4,j=7;
	do{
		printf("Loop ");
	}while(++i<--j);
	*/
	
	/*
	if(4<2)
	
		printf("+++");
	printf("***");	
	*/
	
	/*
	int flag=0,i,n;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			flag=1;
			break;
	}
	if(flag==1)
		printf("%d asal sayi degildir",n);
	else
		printf("%d asal sayi dir",n);	
	*/
	
	/*
	//did not workd prime numbers
	int c=0,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c=1;
	}
	if(c==2)
		printf("%d asal sayi degildir",n);
	else
		printf("%d asal sayi dir",n);
	*/
	
	
	
	/*
	// true||does not need to check 
	int a=2, b=2,c=0,d=2,m;
	m=a++||b++&&c++&&d++;
	printf("%d %d %d %d %d",a,b,c,d,m); 
	*/
	
 
	int i;
	for(i=0;i<10;i++)
	{
		switch(i)
		{
			case 0: i+=5;break;
			case 1: i+=2;break;
			case 5: i+=5;break;
			default: i+=4;
		}
		printf("%d",i);
	}
 
	
	
	


}
