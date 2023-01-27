#include "main.h"

/**
 * is_printable - Function that evaluates whether  a char is printable
 * @c: Character being evaluated.
 * Return: 1 for  printable character and 0 if otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Function appends the ASCII in hexadecimal to the buffer
 * @buffer: Array of characters.
 * @i: Index that begins the  appending.
 * @ascii_code: ASSCI code.
 * Return: 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Function that verifies whether a char is a digit
 * @c: Character being evaluated
 * Return: 1 to indicate a digit, 0 if otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Function that casts a number to the specified size
 * @num: Number being casted to the specified size.
 * @size: Number indicating the siz to be casted.
 * Return: value of the casted number
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Function that casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 * Return: value of casted number
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
