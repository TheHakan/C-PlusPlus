#include <stdio.h>
int main() 
  {
   int i, j;
   char a = 'A';
   int n=5,k;
   int ctr = 1;
   
   printf("Khagan Karimi \n \n");
   
   for (i = 1; i <= n; i++) 
	{
		for(k=1;k<=n-i;k++)  
        
		printf("  ");
      	for (j = 0; j <= (ctr / 2); j++)
		{
        	printf("%c ", a++);
      	}
      	a = a - 2;
      	
      	for (j = 0; j < (ctr / 2); j++) 
		{
        	printf("%c ", a--);
        }
        
      ctr = ctr + 2;
      a = 'A';
      printf("\n");
   }
}
