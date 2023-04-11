#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 * @filename: file's identity
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nk, naakoshie, naa;

	if (!filename)
		return (-1);

	nk = open(filename, O_WRONLY | O_APPEND);
	if (nk == -1)
		return (-1);

	if (text_content)
	{
	for (naakoshie = 0; text_content[naakoshie] != '\0'; naakoshie++)
	;

	naa = write(nk, text_content, naakoshie);
	if (naa == -1)
	{
	close(nk);
	return (-1);
	}
	}

	close(nk);
	return (1);
}
