#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - prints to sdout the number of letters provided
 * @filename: filename
 * @letters: number of letters to print
 * Return: ssize_t number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * (letters));
	if (fd == -1 || !buffer)
		return (0);
	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, buffer, rd);
	close(fd);
	free(buffer);
	return (wr);
}
