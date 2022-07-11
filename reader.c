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
			for (j = 0; f_list[j].letter != NULL; j++)
			{
				if (format[i + 1] == f_list[j].letter[0])
				{
					check_print = f_list[j].f(arg_list);
					if (check_print == -1)
						return (-1);
					char_counter += check_print;
					break;
				}
			}
			if (f_list[j].letter == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					char_counter = char_counter + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
		_putchar(format[i]);
			char_counter++;
		}
	}
	return (char_counter);
}
