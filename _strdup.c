#include "shell.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i, l = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + l))
		l++;
	l++; /* add null terminator to lgth */

	duplicate_str = malloc(sizeof(char) * l); /* allocate memory */
	if (duplicate_str == NULL)
		return (NULL);

	i = 0;
	while (i < l)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}
