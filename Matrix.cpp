#include <stdio.h>

int main(void)
{
char ch;
int i, j, row=5, start, middle, end;


start = middle = end = (row * 2) - 1;

for (i = 0; i < row; i++)
{
	ch = 'A';
	for (j = 1; j <= end; j++)
	{
	if (start <= j)
	{
	if (j % 2 != 0)
	{
		printf("%c", ch);
		(middle <= j) ? ch-- : ch++;
	}		

	else
		printf(" ");
	}
		start-=2;
		end+=2;
		printf("\n");
}
return 0;}
}
