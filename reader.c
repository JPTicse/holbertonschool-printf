#include "main.h"

/**
 * reader - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int reader(const char *format, get_function f_list[], va_list arg_list)
{
	int i, j, check_print, char_counter;

	char_counter = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			/*add the struct get_functions conditions*/
		}
		else
		{
		_putchar(format[i]);
			char_counter++;
		}
	}
	return (char_counter);
}
