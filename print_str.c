#include "main.h"
/**
 * print_str - Prints a string
 * @list: arg_list || list of arguments
 * Return: Return how many characters are printed.
 */
int print_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	/*Loop that go through each character of the string*/
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
