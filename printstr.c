#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * ppstr - parse and print string from va_list
 * @ap: arg ptr to string
 * @spec: format specifier
 * Return: int, number of printed chars
 */
int ppstr(va_list ap, char *spec)
{
	int count;
	int len;
	char *tmp;

	if (spec == NULL)
		return (0);
	tmp = va_arg(ap, char *);
	len = _strlen(tmp);
	count = print_str(tmp, len);

	return (count);
}

/**
 * pprev - parse and print @str in reverse order
 * @ap: ptr to list of args, the str to retrieve
 * @spec: format specifier
 * Return: Number of printed chars
 */
int pprev(va_list ap, char *spec)
{
	int len, i, j, count = 0;
	char *str, *tmp;

	if (spec == NULL)
		return (0);
	tmp = va_arg(ap, char *);
	len = _strlen(tmp);
	if (!tmp)
		return (print_str(NULL, 0));
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);

	i = 0;
	j = len;
	while (j > 0)
	{
		str[i] = tmp[--j];
		i++;
	}
	str[i] = '\0';

	count = print_str(str, len);
	free(str);

	return (count);
}

/**
 * pprot13 - parse @str arg from va_list and print
 * @ap: arg ptr
 * @spec: format specifier
 * Return: number of printed chars
 */
int pprot13(va_list ap, char *spec)
{
	int i, j, len, count;
	char *tmp, *str;
	char comp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char equiv[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (spec == NULL)
		return (0);
	tmp = va_arg(ap, char *);
	len = _strlen(tmp);
	str = malloc(len * sizeof(char));

	if (!tmp)
		return (print_str(NULL, 0));
	if (!str)
		return (0);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (tmp[i] == comp[j])
			{
				str[i] = equiv[j];
				break;
			}
		}
		if (j == 52)
			str[i] = tmp[i];
	}
	count = print_str(str, len);
	free(str);

	return (count);
}

/**
 * print_str - print a string pointed to by @str
 * @str: ptr to string
 * @len: string length
 * Return: int, number of printed chars
 */
int print_str(char *str, int len)
{
	if (!str)
		return (print_str("(null)", 6));

	return (write(1, str, len));
}
