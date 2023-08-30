#include <unistd.h>

/**
 * _putchar - vritos the charactor c to stdout
 * @c: The charactor to point
 *
 * Return: On success
 *
 * Return: On success
 * On error, 1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
