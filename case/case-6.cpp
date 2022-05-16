
#include <stdio.h>
void display(int m[5])
{ 
  printf("dispaly marks:");
  for(int i=0; i<5;i++)
   printf("\nstudent %d: %d", i+1, m[i]);
	
}

int main()
{
	int marks[5]={88,76,90,5,61};
	display(marks);//&marks[0]
	
}
