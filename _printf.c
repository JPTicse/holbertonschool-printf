#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int char_counter;
	/*Creating the function list containing all specifiers*/
	get_function f_list[] = {
		{"c", print_c},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	va_list arg_list;

	/*Validate input*/
	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling our reader function to get the function execute*/
	char_counter = reader(format, f_list, arg_list);
	va_end(arg_list);
	return (char_counter);
}
