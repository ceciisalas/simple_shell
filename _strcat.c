#include "shell.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int l2 = 0;
	int total_l = 0;
	int j = 0;

	/* find total lgth of both strings to __realloc */
	while (dest[l] != '\0')
	{
		l++;
		total_l++;
	}
	while (src[l2] != '\0')
	{
		l2++;
		total_l++;
	}

	/* __realloc because dest was malloced outside of function */
	dest = __realloc(dest, l, sizeof(char) * total_l + 1);

	while (src[j] != '\0')
	{
		dest[l] = src[j];
		l++;
		j++;
	}
	dest[l] = '\0';

	return (dest);
}
