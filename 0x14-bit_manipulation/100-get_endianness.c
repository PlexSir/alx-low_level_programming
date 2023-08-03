#include "main.h"

/**
 * get_endianness - determines the endianness of a machine (little or big)
 * Returns: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}
