#include "main.h"
/**
 * print_c - Prints characters
 * @list: arg_list || list of arguments
 * Return: Return how many characters are printed.
 */
int print_c(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
