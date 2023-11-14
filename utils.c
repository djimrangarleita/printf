/*
 * this file content utils/helpers functions
 */

/**
 * _strlen - calculate the length of the string @str
 * @str: char pointer to string
 * Return: int representing the length of @str
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str && *str)
	{
		len++;
		str++;
	}

	return (len);
}
