#include "main.h"

/**
 * print_percent - Prints a percent symbol
 * @list: arg_list || list of arguments
 * Return: Return how many characters are printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');/*calling the function _putchar to print the character percent*/
	return (1);
}
