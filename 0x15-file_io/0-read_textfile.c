#include "main.h"

/**
 * read_textfile - reads from file and write to stdout
 * @filename: file name
 * @letters: num of letters
 *
 * Return: 0 if something fails, OTHERWISE return num_written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_letters;
	ssize_t num_written;
	char *file_content;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	file_content = malloc(sizeof(char) * (letters + 1));
	if (!file_content)
	{
		close(fd);
		return (0);
	}

	num_letters = read(fd, file_content, letters);
	if (num_letters < 0)
	{
		free(file_content);
		close(fd);
		return (0);
	}

	file_content[num_letters] = '\0';

	num_written = write(STDOUT_FILENO, file_content, num_letters);
	if (num_written != num_letters || num_written < 0)
	{
		free(file_content);
		close(fd);
		return (0);
	}

	free(file_content);
	close(fd);
	return (num_written);
}
