#include "main.h"

/**
 * set_bit - modifies a bit, setting it to 1.
 * @n: pointer to the number to be modified
 * @index: index of the bit to set to 1
 * Return: 1 on success, -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
