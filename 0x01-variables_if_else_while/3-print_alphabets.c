/* headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char low;
	char upp;
	char letra;

	for (low = 'a'; low <= 'z'; low++)
	{
		letra = low;
		putchar(letra);
	}
	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		letra = upp;
		putchar(letra);
		if (letra == 'Z')
		{
			putchar('\n'); }
	}
	return (0);
}
