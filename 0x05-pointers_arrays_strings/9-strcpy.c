#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: Success
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\n'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
