//read into a file
#include<stdio.h>
#include <stdlib.h>
int main(){
	int num;
	FILE *fptr;
	
	fptr=fopen("C:\\Users\\elham\\Downloads\\program.txt", "r");
	if(fptr==NULL){
		printf("ERROR!");
		exit(0);
		
	}
	
	fscanf(fptr,"%d", &num);
	printf("value is=%d", num);
	fclose(fptr);
}
