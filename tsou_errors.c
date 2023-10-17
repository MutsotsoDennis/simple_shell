#include "shell.h"

/**
 * _eputs - prints an_input-string
 * @str: tseo string_2b- printed
 * Return: Null/Zero
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writes the xcter c to std_err
 * @c:tsou xcter 2 print
 *
 * Return:  1 if = success
 * error' -1 is returned, err_no is set appropriately.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - writes tsou xcter c to given fd
 * @c: tsou xcter 2 print
 * @fd: tsou file_descriptor 2 write 2.
 * Return: 1;success
 * error, -1;returned, err_no is set appropriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - prints-input_string
 * @str: tsou string 2b printed
 * @fd: tsou file_descriptor-2-write to
 * Return: tsou num of xchars inserted
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
