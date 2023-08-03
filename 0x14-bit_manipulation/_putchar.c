#include "main.h"
#include <unistd.h>
/**
 * _putchar - output the character 'c' to the standard output.
 * @c: The character to be printed.
 * Return: Returns 1 on successful output.
 * If an error occurs, the function returns -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
