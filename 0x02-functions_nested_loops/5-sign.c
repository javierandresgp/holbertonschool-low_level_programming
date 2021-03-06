#include "holberton.h"
/**
 * print_sign - print the sign of a number
 * @n: The number input
 * Return: 1 and prints + if n is greater than zero
 * or return 0 and prints 0 if n is zero
 * or return -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int zero = 0;

	if (n > zero || n < zero)
	{
		if (n > zero)
		{
			_putchar ('+');
			return (1);
		}
		if (n < zero)
		{
			_putchar ('-');
			return (-1);
		}
	}
	_putchar ('0');
	return (0);
}
