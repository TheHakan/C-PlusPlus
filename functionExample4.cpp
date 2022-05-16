#include <stdio.h>

void areaRect(int x,int y)
{
	int sonuc=x*y;
	sonuc=x*y;
	printf("Area is: %d",sonuc);
	
}			   

int main()
{
	int x,y,sonuc;
	printf("Enter two numbers of length and width: ");
	scanf("%d %d", &x ,&y);
		
	areaRect(x,y);
	
}
