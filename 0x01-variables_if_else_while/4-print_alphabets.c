#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print alphabet exept q and e
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'a')
		{
		putchar(alphabet);
		}
	alphabet++;
	}
	putchar('\n');
	return (0);
}
