#include "shell.h"

/**
 * interactive - returns Yes if shell_is-interactive mode
 * @info: struct-address'
 * Return: 1 =interactive mode, 0 else
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - Wether _character is a delimeter
 * @c: the char-2 check
 * @delim: tsou_delimeter string
 * Return: 1- true, 0 -false'
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks-4-alphabetic character
 * @c: The xcter to input
 * Return: 1 if-alphabetic, 0 else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *tsou_atoi - converts-string 2_integer
 * @s: the string 2b-converted
 * Return: 0 if no num in-string, converted number else
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

