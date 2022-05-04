#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	/* check if file is null */
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);

	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr == -1)
		return (0);

	close(fd);

	free(buffer);

	return (wr);
}
