
include <stdio.h>
int main()
{
	int i;
	int number, sum=0;
	for (i=1;i<=10;i++)
	{
		printf("enter a number %d: ", i);
		scanf("%d" , &number);
		
		if (number<0)
		break;
		
		sum=sum+number;
	}
	printf("sum=%d" , sum);
}

