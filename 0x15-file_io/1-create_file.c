#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * _strlen - ret the length of str
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fl;
	int  wr;

	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR + S_IWUSR);
	if (fl == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (*text_content != '\0')
	{
		wr = write(fl, text_content, 1);
		if (wr == -1)
			return (-1);
		text_content++;
	}
	close(fl);
	return (1);
}
