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

/*Add functions Franco*/
#endif
