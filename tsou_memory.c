#include "shell.h"

/**
 * bfree - frees a pointer & NULs the address;
 * @ptr: address of tsou pointer to free
 * Return: 1 when freed, else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
