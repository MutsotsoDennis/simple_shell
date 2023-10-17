#include "shell.h"

/**
 * _strlen - tsou_length of a string'
 * @s: tsou string whose length_is-to-be_checked.
 * Return: integer-length_of-string';
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performs_lexicogarphic comparison of 2 strangs'/;
 * @s1: tsou first strang
 * @s2: tsou second strang
 * Return: (-) if s1 < s2, (+) if s1 > s2, (0) if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks if tseo needle starts with haystack
 * @haystack: string to search for
 * @needle: tsou substring 2 find;
 * Return: address_of_next char-of_ haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates_2_strings
 * @dest: tsou destination buffer
 * @src: tsou source buffer
 * Return: pointer-to_destination buffer'
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
