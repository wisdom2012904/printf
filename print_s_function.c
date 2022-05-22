#include "main.h"
/**
 * print_s - prints string
 * @list: list to print
 * Return: pointer args
 */
char *print_s(va_list list)

{

	char *s;


	s = va_arg(list, char *);


	if (s == NULL)

		return (s = "(null)");

	return (s);

}
