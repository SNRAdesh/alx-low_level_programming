#include "main.h"

/**
 * append_text_to_file - appending text at the end of a file.
 * @filename: Name of the file.
 * @text_content: String to append at the end of the file.
 * Return: 1 if the file exist, -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	int x;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	ptr = open(filename, O_APPEND | O_WRONLY);
	if (ptr == -1)
		return (-1);
	for (x = 0; text_content[x] != '\0'; x++)
	{
		if (write(ptr, &text_content[x], 1) == -1)
		{
			close(ptr);
			return (-1);
		}
	}
	close(ptr);
	return (1);
}
