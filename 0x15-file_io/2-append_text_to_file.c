#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, c);
	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}
