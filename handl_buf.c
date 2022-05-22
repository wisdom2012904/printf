#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> de3852e19f1b57b1c8fefe12704b039058ac704f
/**
 * handl_buf - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
<<<<<<< HEAD
unsigned int handl_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
=======

unsigned int handl_buf(char *buf, char c, unsigned int ibuf)

{

	if (ibuf == 1024)

	{

		print_buf(buf, ibuf);

		ibuf = 0;

	}

	buf[ibuf] = c;

	ibuf++;

	return (ibuf);

>>>>>>> de3852e19f1b57b1c8fefe12704b039058ac704f
}
