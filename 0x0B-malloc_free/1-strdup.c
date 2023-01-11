#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, le;

	i = 0;
	le = 0;

	if (str == NULL)
		return (NULL);
	while (str[le])
		le++;

	dup = malloc(sizeof(char) * (le + 1));
	if (dup == NULL)
		return (NULL);
	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
