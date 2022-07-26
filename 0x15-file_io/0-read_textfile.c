#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, fd1, fd2;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	fd1 = read(fd, buffer, letters);

	if (fd1 == -1)
	{
		free(buffer);
		return (0);
	}

	fd2 = write(STDOUT_FILENO, buffer, fd1);

	if (fd2 < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (fd2);
}
