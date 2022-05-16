//write into a file
#include<stdio.h>
#include <stdlib.h>
int main(){
	int num;
	FILE *fptr;
	
	fptr=fopen("C:\\Users\\elham\\Downloads\\program.txt", "w");
	if(fptr==NULL){
		printf("ERROR!");
		exit(0);
		
	}
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	fprintf(fptr,"%d", num);
	fclose(fptr);
}
