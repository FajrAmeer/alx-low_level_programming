#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print alphabit
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
