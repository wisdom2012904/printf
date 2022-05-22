#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_bin - print binary
 * @list: va_list
 * Return: pointer to string of binary
 */

char *print_bin(va_list list)
{
	unsigned int n;
	char s[1024];
	char *b;
	int i = 0;

	b = s;
	n = va_arg(list, unsigned int);

	if (n == 0)
	{
		s[++i] = '0';
	}

	while (n != 0)
	{
		s[i] = (n % 2) + '0';
		i++;
		n /= 2;
	}

	rev_string(s);
	s[i] = '\0';

	return (b);
}


/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

void *rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char ltemp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		ltemp = s[i];
		s[i] = s[aux];
		s[aux] = ltemp;
		aux++;
		i--;
	}
	return (s);
}
