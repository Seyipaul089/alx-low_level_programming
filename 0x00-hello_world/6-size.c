#include <stdio.h>

/**
 * main - prints the sting in the put function
 *
 * Description: using the main function
 * this program prints "proramming is like buildin a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %1d byte(s)\n", sizeof(c));
	printf("size of an int: %1d byte(s)\n", sizeof(i));
	printf("size of a long int: %1d byte(s)\n", sizeof(li));
	printf("size of a long long int: %1d byte(s)\n", sizeof(lli));
	printf("size of a flow: %1d byte(s)\n", sizeof(f));
	return (0);
}	
