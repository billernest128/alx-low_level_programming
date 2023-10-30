#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);
	free(buff);


	return (nwr);
}

