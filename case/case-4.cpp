//constant pointer

//const int * ptr;
//int *const ptr;
#include <stdio.h>
/*int main()
{
	const int a=10;
	const int *ptr=&a;
	*ptr=5;//wrong
	 ptr++;//right
	
	printf("a=%d", a);
	printf("\nadress=%p",ptr );
}
*/
int main()
{
    int a=10;
	int * const ptr=&a;
	*ptr=5;//right
	// ptr++; //wrong
	
	printf("a=%d", a);
	printf("\nadress=%p",ptr );
}
