#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: ptr to the name of file
 * @letters: number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr, wr;
	char *text;
	ssize_t bytes_read;
	size_t allo;

	if (filename == NULL)
		return (0);
	allo = sizeof(char) * letters;
	text = malloc(allo);
	if (!text)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	bytes_read = read(ptr, text, letters);
	wr = write(STDOUT_FILENO, text, bytes_read);
	close(ptr);
	return (wr);
}
