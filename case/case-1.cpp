#include <stdio.h>

int increment()
{
    //int var=3;
    static int count=3;
	count=count+1;
	return count;
	
}

int main()
{
	int value;
	value=increment();
	value=increment();
	value=increment();
	//value=count+1;
	printf("%d", value);
}
