#include <stdio.h>
/**
*main -print A to Z
*Return:0 as success
*/

int main(void)
{
	char i;
	
	for (i = 'A'; i <= 'Z'; i++)
	    printf("%C\n", i);
	return (0);
}
