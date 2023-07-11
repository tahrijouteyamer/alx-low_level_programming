#include "main.h"

/**
 * create_file - creates a function that create a file
 * @filename: the filename input
 * @text_content: the text content input
 * Return: 1 if success and  -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int x = 0, o, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (; text_content[x]; x++)
			;
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, x);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
