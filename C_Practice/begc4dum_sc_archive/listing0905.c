#include <stdio.h>

int main()
{
	int alpha,code;

	for(alpha='A';alpha<='G';alpha=alpha+1)
	{
		for(code=1;code<=7;code=code+1)
		{
			printf("%c%d\t",alpha,code);
		}
		putchar('\n');      /* end a line of text */
	}
	return(0);
}
