#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - prints to sdout the number of letters provided
 * @filename: filename
 * @letters: number of letters to print
 * Return: int number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr !== letters)
		return (0);

	close(fd);

	free(buffer);

	return (wr);
}
