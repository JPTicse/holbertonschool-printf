#include "main.h"

/**
 * print_number - prints a number send to this function
 * @args: arg_list || list of arguments
 * Return: Return how many characters are printed.
 */
int print_number(va_list args)
{
	int n, div, len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	return (len);
}
