#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fil;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fil = open(filename, O_WRONLY | O_APPEND);

	if (fil == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fil, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fil);

	return (1);
}
