#include "main.h"
/**
 * print_c - prints char
 * @list: arguement char
 * Return: pointer args
 */
char *print_c(va_list list)
{
	static char s[2] = {0, '\0'};

	s[0] = va_arg(list, int);

	if (s[0] == '\0')
		return (" ")

	return (s);

}

