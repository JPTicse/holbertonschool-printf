#include "main.h"

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int print_uns_int(va_list list)
{
    unsigned int num;

    num = va_arg(list, unsigned int);

    if (num == 0)
        return (print_unsigned_number(num));

    if (num < 1)
        return (-1);
    return (print_unsigned_number(num));
}
