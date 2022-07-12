#include "main.h"
/**
 * print_int - Prints an integer
 * @list: arg_list || list of arguments
 * Return: Return how many are printed.
 */
int print_int(va_list list)
{
	int num_len;

	/*Calling our aux function, see function print_number*/
	num_len = print_number(list);
	return (num_len);
}
