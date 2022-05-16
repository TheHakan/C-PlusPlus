#include <stdio.h>
union abc{
	int a;
	char b;
};

int main()
{ 
  union abc var;
  var.a=65;
  printf("%d ", var.a);
  printf("%c", var.b);
	
}
