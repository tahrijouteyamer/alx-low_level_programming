#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @str1: input one to concate
 * @str2: input two to concate
 * Return: concat of str1 and str2
 */
char *str_concat(char *str1, char *str2)
{
	char *conct;
	int i, ci;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	i = ci = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (str1[i] != '\0')
	{
		conct[i] = str1[i];
		i++;
	}

	while (str2[ci] != '\0')
	{
		conct[i] = str2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
