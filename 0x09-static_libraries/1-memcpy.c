#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: nb of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;


	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}

