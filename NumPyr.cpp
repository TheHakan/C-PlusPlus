#include <stdio.h>

int main()
{
	int i,j,k,num=1;
	for(i=1; i<=4; i++)
	{
		for(j=3; j>=i; j--)
		{
			printf(" ");
		}
		
		for(k=1; k<=num; k++)
		{ 
			printf("%d",k);
			printf(" ");
		}            
			num = num+1;    
	    printf("\n");
	}
}
