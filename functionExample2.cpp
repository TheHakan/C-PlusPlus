#include <stdio.h>

int	areaRect()
{
	int x,y,result,sonuc;
 	printf("Enter two numbers of length and width: ");
	scanf("%d %d", &x ,&y);
	sonuc=x*y;
	printf("Area is: %d",sonuc);
	
}			   

int main()
{
	
	int result=areaRect();
	
}
