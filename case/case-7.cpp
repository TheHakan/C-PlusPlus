
#include <stdio.h>
int* display(int m[5])
{ 
   m[0]=99;
   m[1]=100;
   m[2]=87;
	
  return m;	
}

int main()
{
	int marks[5];
	int *p=display(marks);//&marks[0]
	
  printf("dispaly marks:");
  for(int i=0; i<5;i++)
   printf("\nstudent %d: %d", i+1, *(p+i));
}
