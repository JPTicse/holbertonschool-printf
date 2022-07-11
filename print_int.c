#include "main.h"
/**
 * print_int - Prints an integer
 * @list: arg_list || list of arguments
 * Return: Return how many are printed.
 */
int print_int(va_list list)
{
	int num_len;

	num_len = print_number(list);
	return (num_len);
}
