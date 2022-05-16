#include <stdio.h>
#include <stdlib.h>
int toplam(int,int);
 
int main()
{
	
	int dizi[]={3,5,7};
	printf("%d",toplam(dizi[1],dizi[2]));
}

int toplam (int x, int y)
{
	int toplam=x+y;
	return toplam;
}
