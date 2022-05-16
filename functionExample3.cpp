#include <stdio.h>

void areaRect()
{
	int x,y,sonuc;
 	printf("Enter two numbers of length and width: ");
	scanf("%d %d", &x ,&y);
	sonuc=x*y;
	printf("Area is: %d",sonuc);
	
}			   

int main()
{
	
	areaRect();
	
}
