#include <stdio.h>

int main()
{
	int c;

	for(c=-5;c<5;c++)
		printf("%d ",c);
	for(;c>=-5;c--)
		printf("%d ",c);
	putchar('\n');
	return(0);
}
