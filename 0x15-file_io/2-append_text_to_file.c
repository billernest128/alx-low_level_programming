#include "main.h"
/**
 * append_text_to_file - add file to already existing file
 *
 * @filename: filename to append
 * @text_content: content to be appended to file
 *
 * return: 1 success, -1 not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nletters;
	int r;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
		if (f == -1)
			return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)

		r = write(f, text_content, nletters);

		if (r == -1)
			return (-1);
	}
	close(f);

	return (1);
}
