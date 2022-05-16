#include<stdio.h>
#include <stdlib.h>
struct student
{
	char name[20];
	int no;
	float ave;
};
int main(){
  int n=2;
  struct student s[n];
  
  FILE *ptr;
  int i;
  ptr=fopen("C:\\Users\\elham\\Downloads\\studentinfo.txt", "w");
  for(i=0; i<n;i++)
  {
  	printf("Enter student name:");
  	scanf("%s",s[i].name );
  	
  	printf("Enter student ID:");
  	scanf(" %d",&s[i].no );
  	
  	printf("Enter student average:");
  	scanf("%f",&s[i].ave );
  	
  	fprintf(ptr,"\nName:%s \t ID:%d \t average:%f ", s[i].name, s[i].no,s[i].ave);
  	 	
  }
  fclose(ptr);
}
