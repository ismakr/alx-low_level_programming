#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: content to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, wr;

	if (!filename)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);
	if (text_content)
	{
		while (*text_content != '\0')
		{
			wr = write(fl, text_content, 1);
			if (wr == -1)
				return (-1);
			text_content++;
		}
	}
	close(fl);
	return (1);
}
