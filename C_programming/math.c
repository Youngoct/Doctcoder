#include <stdio.h>

/**
*print_my_name - function that print a name
*
*Return:0 as success
*/
int print_my_name(){
	printf("yusuf\n");
	return (0);
}

/**
 *main - sum, takeaway multiply divide the value assign to the vriable
 *
 *Retun:0 as success
 */
int main(void)
{
	int k = 14000000;
	int s = 2000000;
	int add = k + s;
	int takeaway = s - k;
	int multiply = k * s;
	int divide = s / k;

	printf("total = %i\n", add);
	printf("total = %i\n", takeaway);
	printf("total = %i\n", multiply);
	printf("total = %i\n", divide);
	print_my_name ()
	return (0);
}
