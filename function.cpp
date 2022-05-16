#include <stdio.h>

int	areaRect(int L,int W)
{
	int a;
	a=L*W;
	return a;
	
}			   

int main()
{
	int x,y;
	printf("Enter two numbers of length and width: ");
	scanf("%d %d", &x ,&y);
	
	int result=areaRect(x,y);
	printf("Area is: %d",result);
}
