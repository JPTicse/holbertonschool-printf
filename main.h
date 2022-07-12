#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct functions - defines a structure for letters and functions
* @letter: The operator
* @f: The function associated
*/
struct functions
{
	char *letter;
	int (*f)(va_list);
};
typedef struct functions get_function;

/*Main functions*/
int reader(const char *format, get_function f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_c(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_rot13(va_list list);
int print_uns_int(va_list list);
/*Aux functions*/
int print_number(va_list);
int print_unsigned_number(unsigned int n);
#endif
