#include <stdio.h>

int main()
{
	/*
	int a=1,b;
	b=a++;
	printf("a=%d ",a);
	printf("b=%d",b);
	*/
	
	/*
	int a=1,b;
	b=a++ + a++;
	printf("a=%d ",a);
	printf("b=%d",b);
	*/
	
	/*
	int a=1,b;
	b=++a + ++a;
	printf("a=%d ",a);
	printf("b=%d",b);
	*/
	
	/*
	int var=5;
	printf("%d\n",var++);
	printf("%d",++var);
	*/
	
	//Operators
	
	//Aritmethic
	// + - * / %
	
	// Assignment 
	/*
	a+=b; // a=a+b plus 
	a-=b; // a=a-b minus
	a*=b; // a=a*b multiplier
	a/=b; // a=a/b diveder
	a%=b; // a=a%b reamiander
	*/
	// Relational
	// > < >= <= == !=
	
	/*
	int a=5, b=5,c=10;
	printf("%d==%d is true(%d)\n",a,b,a==b);
	
	printf("%d==%d is false(%d)\n",a,c,a==c);
	
	printf("%d!=%d is false (%d)\n",a,b,a!=b);
	
	printf("%d!=%d is true(%d)\n",a,c,a!=c);
	
	printf("%d<=%d is true(%d)\n",a,c,a<=b);
	*/
	
	// Logical operators
	// || &&
	/*
	//and(&&)| result
	// if first side is true check other side but if false then other side is false
	//  ---|---
	//   00|0
	//   01|0
	//   10|0
	//   11|1
	// true| 
	*/
	
	/*
	int c=5, d=2;
	if((c==5)&&(d<5));
	printf("%d %d",c,d);
	*/
	
	/*
	//or(||)| result
	// if first side is false check other side but if true then other side is true
	//  ---|---
	//   00|0
	//   01|0
	//   10|0
	//   11|1
	// true|
	*/  
	
	/*
	Not (!)
	0->1
	1->0
	Example: 
	c=5
	!(c==5)	= 0 (false)
	*/
	
	/*
	= and == are not same 
	a=b is variable. B is assigned to A
	
	a==b is condition. A and B is checked if they are equal 
	*/
	
	/* Precedence
	1. () ilk parantez
	2. /*% soldan saga dogru 
	3. +- sonra toplama cikma
	4. == < > <= >= != relational 
	5.&& || 1 logical
	6. = assignment
	*/
	
	int a=6, b=4;
	int i,j,x,y;
	
	i=++a;
	printf("Now i= %d and a = %d\n",i,a);
	j=a++;
	printf("Now j= %d and a = %d\n",j,a);
	
	x=--b;
	printf("Now x= %d and b= %d\n",x,b);
	y=b--;
	printf("Now y= %d and b = %d\n",y,b);
	
}
	 

